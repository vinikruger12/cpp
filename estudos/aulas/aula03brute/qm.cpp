#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> vec(n);
  

    for(int i = 0; i < n*n; i++){
       cin >> vec[i]; 
    }

    if(
        vec[0] + vec[1] + vec[2] == vec[3] + vec[4] + vec[5] == vec[6] + vec[7] + vec[8]
                    &&
        vec[0] + vec[3] + vec[6] == vec[1] + vec[4] + vec[7] == vec[2] + vec[5] + vec[8]
                    &&  
        vec[0] + vec[4] + vec[8] == vec[2] + vec[4] + vec[6] 
    ){
        cout << vec[0] + vec[1] + vec[2];
    }

    else if( vec[0] + vec[1] + vec[2] + vec[3] == vec[4] + vec[5] + vec[6] + vec[7] == vec[8] + vec[9] + vec[10] + vec[11] == vec[12] + vec[13] + vec[14] + vec[15]
        &&
vec[0] + vec[4] + vec[8] + vec[12] == vec[1] + vec[5] + vec[9] + vec[13] == vec[2] + vec[6] + vec[10] + vec[14] == vec[3] + vec[7] + vec[11] + vec[15]
        &&  
vec[0] + vec[5] + vec[10] + vec[15] == vec[3] + vec[6] + vec[9] + vec[12]){
    cout << vec[0] + vec[1] + vec[2] + vec[3];
}
    else{
        cout << -1;
    }

  
    

}
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec;
    
    int a;


    for(int i = 0; i < 100; i++){
        cin >> a;
        vec.push_back(a);

        if(a == 0){
            break;
    
    }
}

    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

     cout << vec[0] << endl;

}
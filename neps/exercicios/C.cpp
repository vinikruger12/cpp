#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    vector<int> vec(a);
    for(int i = 0;i < a;i++){
        cin >> vec[i];
    }

    vector<int> sub(b);
    for(int i = 0;i < b;i++){
        cin >> sub[i];
    }

    int m = 0;
    int j = 0;
    for(int i = 0;i < a;i++){
        
        if(sub[j] == vec[i]){
            m++;
            j++;
        }

    }
  

     if(m == b){
        cout << "S" << endl;
     }else{
        cout << "N" << endl;
     }
}
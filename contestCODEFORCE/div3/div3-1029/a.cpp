#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin >> t;
   while(t--){
    int n, x; cin >> n >> x;
    vector<int> vec(n);
    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    int c = x;
    int j = 0;
    bool ver = true;
    for(int i = 0;i < n;i++){
        if(vec[i] == 1){
            j = i;
            break;
        }
    }
    int anda = 0;

    for(j; j < n;j++){
       c--;
       if(vec[j] == 1 && c < 0){
        ver = false;
       }
    }

  

    if(ver){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

   }
}
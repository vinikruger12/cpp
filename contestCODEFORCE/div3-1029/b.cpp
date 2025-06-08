#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin >> t;
    while(t--){
    int n;cin >> n;
        vector<int> vec(n);
        for(int i = 0;i < n;i++){
            vec[i] = i+1;
        }

       for(int i = 0;i < n;i++){
        cout << vec[i] << " ";
       }
         
  }
}
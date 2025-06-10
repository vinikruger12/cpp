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

        cout << vec[0] << " ";
       for(int i = (n-1);i > 1;i--){
        cout << vec[i] << " ";
       }

       cout << vec[1] << endl;
         
  }
}
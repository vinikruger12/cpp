#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i < n;i++){
        cin >> vec[i];
       }

       sort(vec.begin(),vec.end());

       int even =0;
       int odd = 0;
        for(int i = 0;i < n;i++){
            if(vec[i] % 2 == 0){
                even += vec[i];
            }else{
                odd += vec[i];
            }
            
       }
       
       if(even > odd){
        cout << "YES" << endl;
       }else{
        cout << "NO" << endl;
       }
    }
}
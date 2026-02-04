#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        vector<int> vec(n);
        for(int i = 0;i < n;i++) cin >> vec[i];
     
        sort(vec.begin(), vec.begin());
        reverse(vec.begin(),vec.end());

        if(vec[0] == (vec[1] + 1) || vec[0] == vec[1]){
         cout << "yes" << endl;
        }else if(n == 1){
            if(vec[0] == 1) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        else cout << "no" << endl;

    }
}
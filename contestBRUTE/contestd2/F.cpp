#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
        for(int i =0;i <n;i++){
            cin >> vec[i];
        }
        int res = 0;
        if(vec[0] == 1){
            res = vec[n-1] + 1;
        }else{
            res = vec[n-1] - 1;
        }

        cout << res << endl;
        
    }
    }

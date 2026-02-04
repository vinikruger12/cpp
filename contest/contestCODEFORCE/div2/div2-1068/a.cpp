#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int many = 0;
        bool thereIs = 0;
        int a = 0;
        for(int i = 0;i < n;i++){
            if(s[i] == '1'){
                thereIs = 1;
                a = i;
            }
            if(s[i] == '0'){
                if(!thereIs) many++;
            }

            if(i == a + k) thereIs = 0;
        }


        cout << many << endl;
    }
}
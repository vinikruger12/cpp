#include <bits/stdc++.h>

using namespace std;


int mex(vector<int> a, int n){
    map<int, int> freq;
    for(int i = 0;i < n;i++){
        freq[a[i]]++;
    }

    int res = 0;
    for(int i = 0;i <= n;i++){
        if(freq[i] == 0){
            res = i;
            break;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        bool zero = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i] == 0) zero = 1;
        }

        int first = mex(a, n);

        int lower = 1e9 + 7;
        for(int i = 0;i < n;i++){
            if(zero){
                lower = min(a[i], lower);
            }
            else{
                if(a[i] > 0){
                    lower = min(a[i], lower);
                }   
            }
        }

        for(int i = 0;i < n;i++){
            a[i] -= lower;
        }


        int second = mex(a, n);
        cout << max(first, second) << endl;

    }
}
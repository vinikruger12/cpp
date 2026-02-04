#include <bits/stdc++.h>

using namespace std;

int main(){
    int tq;
    cin >> tq;

    while(tq--){
        int n;
        cin >> n;
        vector<int> vec(n);

        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int res = 0;
        for(int i = 0; i < n/2; i++){
            res += vec[n-1-i] - vec[i];
        }

        cout << res << endl;

    }
}
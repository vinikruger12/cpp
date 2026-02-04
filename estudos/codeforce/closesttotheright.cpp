#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> ven(n);
    vector<int> vek(k);

    for(int i = 0;i < n; i++){
        cin >> ven[i];
    }

    for(int i = 0;i < k; i++){
        cin >> vek[i];
    }

    for(int i = 0; i < k; i++){

        int res = -1;
        int l = 0;
        int r = n - 1;

        while(l <= r){
            int mid = (l+r)/2;

            if(vek[i] <= ven[mid]){
                res = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }

        if(res == -1){
            cout << n + 1 << endl;
        }else{
            cout << res + 1 << endl;
        }



    }
} 
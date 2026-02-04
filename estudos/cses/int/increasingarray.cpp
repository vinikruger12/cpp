#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec(n);

    for(int i = 0;i < n;i++) cin >> vec[i];
    int res = 0;
    int k = 0;

        for(int i = 0;i < n;i++){
            if(vec[i] > vec[i+1]){
                int aux = vec[i+1];
                vec[i+1] = vec[i];
                vec[i] = aux;
                res++;
                i = 1;
            }
        }

    cout << res << endl;
}
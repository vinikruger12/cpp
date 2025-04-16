#include <bits/stdc++.h>

using namespace std;

int main(){
    int tq;
    cin >> tq;

    while(tq--){
        int a;
        cin >> a;
        vector<int> vec(a);

        for(int i = 0;i < a; i++){
            cin >> vec[i];
        }

        sort(vec.begin(),vec.end());
        int res;
        res = vec[a-1] - vec[0]; 

        cout << res << endl;
    }
}
    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int t; cin >> t;
        int h; cin >> h;
        int res = 0;
        vector<int> vec(t);
        for(int i = 0;i < t;i++){
            cin >> vec[i];
            if(vec[i] <= h){
                res++;
            }
        }

        cout << res << endl;
    }
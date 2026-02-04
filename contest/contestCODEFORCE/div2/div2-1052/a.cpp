    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            vector<int> a(n);
            map<int,int> freq;
            for(int i = 0;i < n;i++){
                cin >> a[i];
                freq[a[i]]++;
            }

            vector<int> b;
            for(auto u:freq){
                b.emplace_back(u.second);
            }

        

            map<int, int> arm;
            if(b.size() == 1) cout << b[0] << endl;
            else{
                int melhor = 0;
                for(int i = 0;i < b.size();i++){
                    for(int j = 0;j < b.size();j++){
                        if(b[i] <= b[j]) arm[i]++;
                    }
                }

                for(int i = 0;i < b.size();i++){
                    melhor = max(arm[i] * b[i], melhor);
                }

                cout << melhor << endl;
            }


        }
    }
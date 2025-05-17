        #include <bits/stdc++.h>

        using namespace std;

        int main(){
            int t; cin >> t;
            while(t--){
                int n; cin >> n;
                vector<int> vec(n);
                string s;
                for(int i = 0; i < n; i++){
                    cin >> s;

                    if(s[0] == '#'){
                        vec[i] = 1;
                    } else if(s[1] == '#'){
                        vec[i] = 2;
                    }else if(s[2] == '#'){
                        vec[i] = 3;
                    }else if(s[3] == '#'){
                        vec[i] = 4;
                    }

            }

                for(int i = (n-1); i >= 0;i--){
                    cout << vec[i] << " ";
                }
                    cout << endl;
                }
                
        }
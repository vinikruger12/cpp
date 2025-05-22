        #include <bits/stdc++.h>
        #include <math.h>
        using namespace std;

        int main(){
            int t; cin >> t;
            while(t--){
                int n;cin >> n;
                long long soma = 0;
                vector<int> vec(n);
                for(int i = 0;i < n;i++){
                    cin >> vec[i];
                
                }

                for(int i = 0; i < vec.size();i++){
                    soma += vec[i];
                }

            int raiz = sqrt(soma);
            double raizd = sqrt(soma);

            if(raiz == raizd){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }

                
                
            }
        }
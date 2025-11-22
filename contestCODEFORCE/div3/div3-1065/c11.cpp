#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
       int n; cin >> n;
       vector<int> a(n), b(n);
        int conta1A = 0, conta1B = 0;

       for(int i = 0;i < n;i++){
            cin >> a[i];
            conta1A ^= a[i];
       }

       for(int i = 0;i < n;i++){
            cin >> b[i];
            conta1B ^= b[i];
       }

       int mai = 0, aji = 0;
    
       for(int i = 0;i < n;i++){
            if((i % 2 == 0)){
                if((conta1A % 2) == 0){
                    if(conta1A ^ a[i] > conta1B ^ b[i]){
                        conta1A -= (conta1A ^ a[i]);
                        conta1A ^= b[i];
                        conta1B -= (conta1B ^ b[i]);
                        conta1B ^= a[i];
                    }
                    else if(conta1A ^ a[i] < conta1B ^ b[i]){
                        conta1A ^= a[i];
                        conta1A -= (conta1A ^ b[i]);
                        conta1B ^= b[i];
                        conta1B -= (conta1B ^ a[i]);
                    }
                }
            }
            else if((i % 2) != 0){
                if((conta1B % 2) == 0){
                    if(conta1A ^ a[i] < conta1B ^ b[i]){
                        conta1A -= (conta1A ^ a[i]);
                        conta1A ^= b[i];
                        conta1B -= (conta1B ^ b[i]);
                        conta1B ^= a[i];
                    }
                    else if(conta1A ^ a[i] > conta1B ^ b[i]){
                        conta1A -= (conta1A ^a[i]);
                        conta1A ^= b[i];
                        conta1B -= (conta1B ^ b[i]);
                        conta1B ^= a[i];
                    }       
                }
            }
       }


       if(conta1A == conta1B) cout << "Tie" << endl;
       else if(conta1B > conta1A) cout << "Mai" << endl;
       else if(conta1A > conta1B) cout << "Ajisai" << endl;

    }
}
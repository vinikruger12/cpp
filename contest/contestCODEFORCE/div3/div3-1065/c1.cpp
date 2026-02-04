#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
       int n; cin >> n;
       vector<int> a(n), b(n);

       for(int i = 0;i < n;i++) cin >> a[i];
       for(int i = 0;i < n;i++) cin >> b[i];

       int mai = 0, aji = 0;
    
       for(int i = 0;i < n;i++){

            if(i == 0){
                if((a[0] ^ a[1]) < (b[0] ^ a[1])){
                aji = b[0];
                mai = a[0];
                }
                else{
                aji = a[0];
                mai = b[0];
                }
            }else{
            if((i % 2) != 0){
                if((mai ^ b[i]) < (mai ^ a[i])){
                    mai ^= a[i];
                    aji ^= b[i];
                }
                else{
                    mai ^= b[i];
                    aji ^= a[i];   
                }
            }
            else if((i % 2) == 0){
                if((aji ^ a[i]) < (aji ^ b[i])){
                    mai ^= a[i];
                    aji ^= b[i];
                }
                else{
                    mai ^= b[i];
                    aji ^= a[i];   
                }
            }
            }

       }


       if(mai == aji) cout << "Tie" << endl;
       else if(mai > aji) cout << "Mai" << endl;
       else if(aji > mai) cout << "Ajisai" << endl;

    }
}
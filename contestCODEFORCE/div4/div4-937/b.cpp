    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            
            for(int i =0; i < n*2;i++){
                for(int j = 0;j < n*2;j++){
                    int linha = i / 2;
                    int coluna = j / 2;
                if ((linha + coluna) % 2 == 0) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << endl;
                }
            }
    }

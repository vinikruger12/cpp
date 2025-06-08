#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int a = 0;
        int b = 0;
        int c = 0;
        string s;

        for(int j = 0;j < 3;j++){
            cin >> s;
            for(int i = 0;i < 3;i++){
            if(s[i] == 'A'){
                a++;
            }else if(s[i] == 'B'){
                b++;
            }else if(s[i] == 'C'){
                c++;
            }
        }
        }

        if(b < c && b < a){
            cout << 'B' << endl;
        }else if(c < b && c < a){
            cout << 'C' << endl;
        }else if(a < b && a < c){
            cout << 'A' << endl;
        }
        
    }
}
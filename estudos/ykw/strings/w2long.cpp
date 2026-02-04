#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    

    cin >> n;

    for(int i = 0; i < n;i++){
        cin >> s;
        int tam = s.length();

        if(tam <= 10){
            cout << s << endl;
        }else{
            cout << s[0] << (s.length() - 2) << s[tam - 1] << endl;
        }
    }
}

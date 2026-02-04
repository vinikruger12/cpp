#include <bits/stdc++.h>

using namespace std;

int main() {
        string s; cin >> s;
        bool ver = true;
        if(s.size() == 8){
            if(!isupper(s[0]) || !isupper(s[1]) || !isupper(s[2]) || s[3] != '-' || !isdigit(s[4]) || !isdigit(s[5]) || !isdigit(s[6]) || !isdigit(s[7])){
                ver = false;
            }

            if(ver){
                cout << 1 << endl;
            }else{
                cout << 0 << endl;
            }

        }else if(s.size() == 7){
            if(!isupper(s[0]) || !isupper(s[1]) || !isupper(s[2]) || !isdigit(s[3]) || !isupper(s[4]) || !isdigit(s[5]) || !isdigit(s[6])){
                ver = false;
            }


            if(ver){
                cout << 2 << endl;
            }else{
                cout << 0 << endl;
            }
        }else{
            cout << 0 << endl;
        }
}
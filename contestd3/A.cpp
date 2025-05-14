#include <bits/stdc++.h> 

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        string inte;
        s = "";
        int n; cin >> n;
        cin >> inte;

        for(int i = 0; i < n; i++){
            if(i + 2 < n && inte[i+2] == '0'){
                int num = (inte[i] - '0') * 10 + (inte[i+1] - '0');
                s += (char)('a' + num - 1);
                i += 2; 
            } else {
               
                int num = inte[i] - '0';
                s += (char)('a' + num - 1);
            }
        }

        cout << s << endl;
    }
}



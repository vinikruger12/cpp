#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;
    string s;cin >> s;
    int x = 0;
    char aux;

   while(k--){
    for(int i = x;i < n;i++){
        if(s[i] == '.'){
            aux = s[x];
            s[x] = s[i];
            s[i] = s[x+1];
            s[x+1] = aux;
            x++;
            break;
        }
    }


   }

   cout << s << endl;

}


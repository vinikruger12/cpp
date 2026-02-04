#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    string t;
    string nova;

    for(int i = 0;i < n;i++){
        cin >> s >> t;
        int tam = max(s.size(), t.size());

        for(int i = 0;i < tam;i++){
            if(i < s.size()) nova += s[i];
            if(i < t.size()) nova += t[i]; 
    }
        cout << nova << endl;
        nova = "";
}
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string a;

    for(int i = 0;i< n;i++){
        cin >> a;
    

    int c = 0;
    for(char u:a){
        if(tolower(u) == 'a' || tolower(u) == 'e' || tolower(u) == 'u' || tolower(u) == 'o' || tolower(u) == 'i'){
            c++;
        }
    }

    cout << c << endl;
    
}}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string g;
    string r;
    int c = 0;

    cin >> n;
    cin >> g;
    cin >> r;

    for(int i = 0; i < n; i++){
        if(g[i] == r[i]){
            c++;
        }
    }


  

    cout << c;
}
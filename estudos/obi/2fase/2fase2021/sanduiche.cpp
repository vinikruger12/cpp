#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;

    map<int,int> nPode;
    for(int i = 0;i < m;i++){
        int a, b; cin >> a >> b;
        nPode[a] = b;
    }

    if(m == 0){
        cout << (pow(2, n) - 1) << endl;
    }
    else{
        cout << (pow(2, n) - 1) - (m+1) << endl;
    }
}
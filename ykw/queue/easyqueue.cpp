#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    queue<pair<int, int>> fila;
    for(int i = 0;i < n;i++){
        int num; cin >> num;
        fila.push({num, i+1});

    }

    while(fila.size() != 1){
    if(fila.front().first - m <= 0){
        fila.pop();
    }
    else{
        fila.push({fila.front().first - m, fila.front().second});
        fila.pop();
    }}


    cout << fila.front().second << endl;
}
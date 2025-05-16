#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    queue<int> fila;

    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        fila.push(num);
    }

        fila.pop();

       cout << fila.front() <<" " << fila.back() << endl;
       
    
}
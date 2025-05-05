#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    queue<string> fila;

    for(int i =0;i <n;i++){
        string s;
        cin >> s;

        fila.push(s);
    }
    
   cout << "O primeiro da fila eh o " << fila.front() << endl;
    cout << "O ultimo da fila eh a " << fila.back() << endl;
    

}
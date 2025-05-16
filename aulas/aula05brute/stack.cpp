#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    stack<int> pilha;
    for(int i = 0; i<n;i++){
        int num; cin >> num;
        pilha.push(num);
    }

    while(!pilha.empty()){
        cout << pilha.top() << endl;
        pilha.pop();
    }

}
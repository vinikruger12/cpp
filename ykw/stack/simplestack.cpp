#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> pilha;
    string s;
    int n = 0;

    while(s != "exit"){
        cin >> s; 
        if(s == "push"){
            cin >> n;
            pilha.push(n);
            cout << "ok" << endl;
        }
        if(s == "back"){
           cout << pilha.top() << endl;
        }
        if(s == "size"){
            cout << pilha.size() << endl;
        }
        if(s == "pop"){
            cout << pilha.top() << endl;
            pilha.pop();
        }
        if(s == "clear"){
            while(!pilha.empty()){
                pilha.pop();
            }
            cout << "ok" << endl;
        }
        if(s == "exit"){
            cout << "bye" << endl;
        }
        
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int a, b;
    char op;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            op = s[i];
            string fd = s.substr(0, i); //funcao para pegar do zero ate o i
            string sd = s.substr(i + 1); // pega do i+1 ate o final

            a = stoi(fd); //converte uma string numero em um inteiro
            b = stoi(sd);
            break;
        }
    }

    if(op == '+') cout << a + b << endl;
    else if(op == '-') cout << a - b << endl;
    else if(op == '*') cout << a * b << endl;
    else if(op == '/') cout << a / b << endl;

    return 0;
}

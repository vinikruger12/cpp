#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    cin >> a >> b >> c;
    if(a == b){
        cout << c;
    }else if(a == c){
        cout << b;
    }else{
        cout << a;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    int d;

    cin >> a >> b >> c;

    d = a - (b+c);

    if(d > b && d > c){
        cout << d;
    }else if(b > d && b > c){
        cout << b;
    }else{
        cout << c;
    }
}
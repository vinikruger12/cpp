#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    cout << "Me de um valor!" << endl;
    cin >> a;

    cout << "Me de outro valor!" << endl;
    cin >> b;

    cout << "Me de mais um valor!" << endl;
    cin >> c;

    if((b > a && a > c) || (c > a && a > b)){
        cout << a << endl;
    }else if((a > b && b > c) || (c > b && b > a)){
        cout << b << endl;
    }else if((a > c && c > b) || (b > c && c > a)){
        cout << c << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int l;
    int c;

    cin >> l >> c;

    if(l == c){
        cout << "1";
    }else if(l%2 != 0 && c%2 != 0){
        cout << "1";
    }else if(l%2 != 0 && c%2 == 0){
        cout << "0";
    }else if(l%2 == 0 && c%2 != 0){
        cout << "0";
    }else{
        cout << "1";
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    if(a == b && c != a && c != b){
        cout << "C" << endl;
    }else if(a == c && b != a && b != c){
        cout << "B" << endl;
    }else if(b == c && a != b && a != c){
        cout << "A" << endl;
    }else{
        cout << "*" << endl;
    }
}
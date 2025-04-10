#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    char b;

    cin >> b;
    int c = 0;
    for(int i = 0;i < a.size(); i++){
        if(b == a[i]){
            c++;
        }
    }
    cout << c;
}

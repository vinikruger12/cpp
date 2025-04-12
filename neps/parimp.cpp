#include <bits/stdc++.h>

using namespace std;

int main(){
    int p;
    int d1;
    int d2;
    int s;

    cin >> p;

    if(p == 0){
            cin >> d1 >> d2;
            int s = d1+d2;

            if(s%2 == 0){
                cout << 0 << endl;
            }
            else{
                cout << 1 << endl;
            }
    }
    else{
        cin >> d1 >> d2;
            int s = d1+d2;

            if(s%2 == 0){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
    }
}
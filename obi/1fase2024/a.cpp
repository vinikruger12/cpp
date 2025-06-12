#include <bits/stdc++.h>

using namespace std;

int main() {
    int e, d; cin >> e >> d;

    if(e > d){
        cout << e << endl;
    }else{
        cout << 2 * (d - e) << endl;
    }
}
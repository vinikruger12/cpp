#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> a;
    for(int i = 0;i < 10;i++){
        int b; cin >> b;
        a.insert(b);
    }

    cout << 4 - a.size() << endl;
}
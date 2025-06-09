#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    string s; cin >> s;

    for(int i = 1;i <= k;i++){
            swap(s[i],s[i+1]);
            
            swap(s[i-1], s[i]);



            cout << s << endl;
}
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
    vector<string> novas(m);

    for(int i = 0;i < m;i++){
        cin >> novas[i];
        sort(novas[i].begin(), novas[i].end());
    }
    int p; cin >> p;
    p--;

    int j = m-1;
    for(int i = (n-1);i >= 0;i--){
        if(s[i] == '#'){
            s[i] = novas[j][p % k]; //fazer o teste de mesa disso para
            p = p/k;                //entender melhor
            j--;
        }
    }

    cout << s << endl;
}
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    int m;
    cin >> m;
    unordered_set<int> sairam;

    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        sairam.insert(x);
    }

    for(int i = 0; i < n; i++){
       if(sairam.find(vec[i]) == sairam.end()){
        cout << vec[i] << endl;
       }
    }

}

   
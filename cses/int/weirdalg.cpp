#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6+6;

int main(){
    long long n; cin >> n;
    vector<long long> vec;
    int tam = 0;
    while(n != 1){
        vec.emplace_back(n);
        if(n % 2 == 0) n = n/2;
        else n = ((n*3) + 1);
    }

    for(int i = 0;i < vec.size();i++){
        cout << vec[i] << ' ';
    }
    cout << 1 << endl;
}
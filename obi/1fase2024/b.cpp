#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> vec(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    

    cout << vec[k-1] << endl;
}
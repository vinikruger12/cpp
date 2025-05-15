#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
            int n; cin >> n;
            string s = n;
            vector<int> vec;

        
        if(n%10 != 1){
            vec.emplace_back() = n % 10;
            n = n/10;
        }
            else{
                vec.emplace_back() = n;
            }

            

            cout << vec.size() << endl;
            for(int i = 0;i < vec.size();i++){
                cout << vec[i] << " ";
            }

            cout << endl;
    }
}

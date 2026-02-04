#include <bits/stdc++.h>
using namespace std;

vector<int> aparece(int a){
    vector<int> vec; 
    int recebe = 1;
    while(a > 0){
        int digit = a % 10;
        if(digit != 0){
        vec.push_back(digit * recebe);
        }

         a = a/10;
         recebe *= 10;
    }

    return vec;
}

int main() {
    int t; cin >> t;
    int a;
    while(t--){
        cin >> a;
        vector<int> vec = aparece(a);
        cout << vec.size() << endl;
        for(int i = 0;i < vec.size();i++){
            cout << vec[i] << " ";
        }

        cout << endl;
    }
}

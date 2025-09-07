#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n), c(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(i % 2 == 0) b[i] = a[i] + 1;
            else b[i] = a[i];

            if(i % 2 != 0) c[i] = a[i] + 1;
            else c[i] = a[i];
        }

        bool ehPar = 1, ehImpar = 1;
        for(int i = 0;i < n;i++){
            if(a[i] % 2 == 0) ehImpar = 0;
            else if(a[i] % 2 != 0) ehPar = 0;
        }

        if(ehImpar || ehPar){
            cout << "YES" << endl;
            continue;
        }

        ehPar = 1;
        ehImpar = 1;

        for(int i = 0;i < n;i++){
            if(b[i] % 2 == 0) ehImpar = 0;
            else if(b[i] % 2 != 0) ehPar = 0;
        }

         if(ehImpar || ehPar){
            cout << "YES" << endl;
            continue;
        }

        ehPar = 1;
        ehImpar = 1;

        for(int i = 0;i < n;i++){
            if(c[i] % 2 == 0) ehImpar = 0;
            else if(c[i] % 2 != 0) ehPar = 0;
        }

         if(ehImpar || ehPar){
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
}
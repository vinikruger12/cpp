#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int n; cin >> n;
    vector<double> vec(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    vector<double> novo;
    novo.emplace_back(0);
    double a = 0;
    for(int i = 1;i < n;i++){
         a += ((vec[i] + vec[i-1]) / 2);
         novo.emplace_back(((vec[i] + vec[i-1]) / 2));
    }
    novo.emplace_back(t);


    double menor = t;
    for(int i = 1;i < novo.size();i++){
         menor = min((novo[i] - novo[i-1]), menor);
    }

   
   
    cout << fixed << setprecision(2) << menor << endl;
}
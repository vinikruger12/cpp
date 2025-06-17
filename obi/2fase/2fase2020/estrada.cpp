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
    double a = 0;
    for(int i = 1;i < n;i++){
         a += ((vec[i] + vec[i-1]) / 2);
         novo.emplace_back(((vec[i] + vec[i-1]) / 2));
    }
  
    if((t - a) > 0){
        novo.emplace_back(t-a);
    }
    sort(novo.begin(), novo.end());

    cout << fixed << setprecision(2) << novo[0] << endl;
}
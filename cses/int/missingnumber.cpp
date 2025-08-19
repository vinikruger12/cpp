#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec(n-1);
    vector<int> outro(n);
    for(int i = 0;i < (n-1);i++){
        cin >> vec[i];
    }

    for(int i = 0;i < n;i++){
        outro[i] = i+1;
    }

    sort(vec.begin(),vec.end());
    sort(outro.begin(),outro.end());

    for(int i = 0;i < n;i++){
        if(vec[i] - outro[i] != 0){
        cout << outro[i] << endl;
        return 0;
    }
    }

}
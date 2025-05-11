#include <bits/stdc++.h> 

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n;i++){
            cin >> vec[i];
        }
        int soma = 1;
        int j = 1;
        for(int i = 0; i < n;i++){
            for(int j = 1;j < n;j++){
                if(vec[i] != vec[j]){
                    soma++;
                }else{
                    break;
                }
            }
        }


    
        cout << soma << endl;
        cout << n - soma << endl;
}   

}
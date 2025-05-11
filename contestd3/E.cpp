#include <bits/stdc++.h> 

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
        vector<int> vet(n);

        for(int i = 0; i < n;i++){
            cin >> vec[i];
        }

        bool verificador = true;

        for(int i = 0;i < n;i++){
            int j = 0;
           
        if(vec[i] % 2 == 0){
            if(vec[j+1] % 2 == 0 && vec[i] > vec[j+1] && i != j){
                vet[i] = vec[j+1];
                vet[j+1] = vec[i];
            }else{
                j++;
            }

        }else if(vec[i] % 2 != 0){
             if(vec[j+1] % 2 != 0 && vec[i] > vec[j+1] && i != j){
                vet[i] = vec[j+1];
                vet[j+1] = vec[i];
            }else{
                j++;
            }
        }

            
            sort(vec.begin(), vec.end());

            for(int i = 0;i < n;i++){
                if(vet[i] != vec[i]){
                    verificador = false;
                }
            }

        }

        if(verificador){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    
    }
}
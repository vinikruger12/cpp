#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }



    int v1 = 0, v2 = 0;
    int conta = 1;
  
    int maior = 1;

    for(int i = 0;i < n;i++){
    
        v1 = vec[i];
        

        for(int k = i+1;k < n;k++){   
            v2 = vec[k];
            bool achou = false;
            if(v1 == v2) continue;
            conta = 2;

            for(int j = (k+1);j < n;j++){
                if(vec[j] == v1 && achou == false){
                    conta++;
                    achou = true;

                }else if(vec[j] == v2 && achou == true){
                    conta++;
                    achou = false;
                }
               maior = max(maior, conta);
            }
        maior = max(maior, conta);
        conta = 0;

           
        }
    }

    cout << maior << endl;

}
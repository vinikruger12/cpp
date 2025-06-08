#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> vec(n);
    map<int, int> mapa;

    for(int i = 0; i < n;i++){
        cin >> vec[i];
        mapa[vec[i]]++;
    }

    vector<int> outro;
    for(int u:vec){
        if(mapa[u] > 1){
            outro.emplace_back(u);
        }
    }

  int conta = 0;


    for(int i = 1;i < outro.size();i++){
       if(outro[i] != outro[i-1]){
            conta++;
        }   
   }


    if(n == 1){
        cout << "1" << endl;
    }else{
    cout << conta << endl;
 }
  
 return 0;

}
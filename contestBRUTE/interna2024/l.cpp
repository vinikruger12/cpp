#include <bits/stdc++.h>

//GRAFOS//

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<pair<int, int>> pares(m);
    vector<pair<int,int>> inverso(m);
    set<int> bolsa1;
    set<int> bolsa2;
    for(int i = 0;i < n;i++){
        cin >> pares[i].first >> pares[i].second;
        inverso[i].first = pares[i].second;
        inverso[i].second = pares[i].first;




    for(int j = 0;j < 5;j++){
        if(bolsa2[j] == pares.first[i]){
            bolsa2.insert(pares.first[i]);
            bolsa1.insert(pares.second[i]);
        }
        else{   bolsa1.insert(pares.first[i]);
                bolsa2.insert(pares.second[i]);
    }
}
    }

    bool ver = true;

    for(int i = 1;i < bolsa1.size();i++){
        for(int j = 1;j < m;j++){
        if(bolsa1[i-1] == pares[j-1].first && bolsa1[i] == pares.[j].second){
            ver = false;
        }
    }
    }


    for(int i = 1;i < bolsa2.size();i++){
        for(int j = 1;j < m;j++){
        if(bolsa2[i-1] == pares[j-1].first && bolsa2[i] == pares.[j].second){
            ver = false;
        }
    }
    }


    if(ver){
        cout << "POSSIVEL" << endl;
        cout << bolsa1.size() << " " << bolsa2.size();
        for(int i = 0;i < bolsa1.size();i++){
            cout << bolsa1[i] << " ";
        }
        cout << endl;
        for(int i = 0;i < bolsa2.size();i++){
            cout << bolsa2[i] << " ";
        }
    }else{
        cout << "IMPOSSIVEL" << endl;
    }

    cout << endl;
}
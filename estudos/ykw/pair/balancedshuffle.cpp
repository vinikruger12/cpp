#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int tam = s.size();

    vector<pair<int, string>> par(tam);

    for(int i = 0;i < tam ;i++){
    par[i].first = i;
    par[i].second = s[i];
    }
    

    vector<pair<int, string>> seg(tam);
    
    for(int i = 0;i < tam ;i++){

        int somad = 0;
        int somae = 0;

        for(int j = i;j < tam;j++){
            if(par[j].second == "("){
                somae++;                                                    
             }
            else if(par[j].second == ")"){
                somad++;
            }
        }
         seg[i].first = abs(somae - somad);
         seg[i].second = par[i].second;

         somad = 0;
         somae = 0;
    
    }


    sort(seg.begin(), seg.end());

    for(int i = 0;i < tam ;i++){
        cout << seg[i].second;
        }

}
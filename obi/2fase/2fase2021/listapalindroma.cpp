#include <bits/stdc++.h>

//A solucao consiste em pegar as extremidades e verificar se elas sao iguais, se nao sao, verificar qual delas é a menor e somar com o valor da direita caso seja a esquerda, ou com a esquerda caso seja a da direitra

using namespace std;


int main(){
    int n; cin >> n;
    vector<int> vec(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    int conta = 0;
    int i = 0;
    int j = n - 1;
    int se = vec[i];
    int sd = vec[j];

    while(i <= j){
        if(se == sd){
            i++; j--;
            se += vec[i];
            sd += vec[j];
        }
        else if(se < sd){
            i++;
            se += vec[i];
            conta++;
        if(i == j){
            break;
        }}
        else if(sd < se){
            j--;
            sd += vec[j];
            conta++;
        if(i == j){
            break;
        }    
        }
        
    }

    cout << conta << endl;
}
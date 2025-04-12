#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> vec(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
   
    vector<int> soma(n+1, 0);
    
    for(int i = 0; i < n;i++){
        soma[i+1] = soma[i] + vec[i];
    }


 
   
    int x, y;
    int preco;

    for(int i = 0; i < q;i++){
        cin >> x >> y;
        preco = soma[n] - soma[n -y];
        
    }
        cout << preco << endl;;
    }
    

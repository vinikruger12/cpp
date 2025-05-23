        #include <bits/stdc++.h>
        
        using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec;
    int soma = 0;
    int aleatorio;
    for(int i = 0;i < n;i++){
        cin >> aleatorio;
        if(aleatorio != 0){
            vec.push_back(aleatorio);
        }else{
            vec.pop_back();
        }
    }

    for(int i = 0;i < vec.size();i++){
        soma += vec[i];
    }

    cout << soma << endl;
}
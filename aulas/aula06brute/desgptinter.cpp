#include <bits/stdc++.h>
using namespace std;

string inverte(string a){
    string c;
    for(int i = a.size();i >= 0;i--){
        c += a[i];
    }

    return c;
}

int contaVOGAL(string a){
    int c = 0;
    for(int i = 0;i < a.size();i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' ||a[i] == 'u'){
            c++;
        }
    }

    return c;
}

bool ehPolindromo(string a){
     string c;
    for(int i = (a.size()-1);i >= 0;i--){
        c += a[i];
    }

    if(c != a){
        return false;
    }else{
        return true;
    }
}

void ordernar(vector<int>& vec){
    sort(vec.begin(), vec.end());
}


int main(){
    string s; cin >> s;
    vector<int> vec(4);
    for(int i = 0; i < 4;i++){
        cin >> vec[i];
    }
    cout << inverte(s) << endl;
    cout << contaVOGAL(s) << endl;
    if(ehPolindromo(s)){
         cout << "é palíndromo" << endl;
    }else{
        cout << "não é palíndromo" << endl;
    }
    
    ordernar(vec);
    for(int i =0; i < vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}



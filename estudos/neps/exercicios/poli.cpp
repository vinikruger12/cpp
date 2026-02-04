#include <bits/stdc++.h>
#include <string>

using namespace std;

int ehPrimo(int a){

    bool bole = true;
    for(int i = (a-1); i >= 2;i--){
        if(a % i == 0){
            bole  = false;
        }
    }

    if(bole){
        return a;
    }else{
        return 0;
    }
}

int ehPalindromo(string s){
    string outra = s;
    reverse(s.begin(),s.end());
    
    if(s == outra){
        return stoi(s);
    }else{
        return 0;
    }
}

int main(){
    vector<int> vec;
    string s; cin >> s;
    int num = stoi(s);


    while(vec.size() == 0){

        s = to_string(num);
        if(ehPalindromo(s) != 0 && ehPrimo(num) != 0){
            vec.push_back(num);
        }

        num++;
    }


    cout << vec[0] << endl;
}
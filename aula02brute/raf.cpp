#include <bits/stdc++.h>

using namespace std;

int main(){
    double a;
    double b;
    double res;

    cin >> a;
    cin >> b;

    res= (a*2+b*3)/5;

    if(res >= 7){
        cout << "Aprovado" << endl;
    }else if(res >= 3){
        cout << "Final" << endl;
    }else{
        cout << "Reprovado" << endl;
    }

}
#include <bits/stdc++.h>

using namespace std;

bool ehPar(int a){
    if(a % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int fatorial(int a){
    int c = 1;
    for(int i = a;i > 0;i--){
        c *= i;
    }
    return c;
}

bool ehPrimo(int a){
    bool b = true;
    for(int i = (a-1);i >= 2;i--){
        if(a % i == 0){
            b = false;
        }
    }

    return b;
}

double celsius4farenhait(double a){
     return 1,8*a + 32;
}

int somavet(vector<int> vec){
    int c = 0;
    for(int i = 0;i < vec.size();i++){
        c += vec[i];
    }

    return c;
}




int main(){
    int a; cin >> a;
    vector<int> vec(a);
    for(int i = 0; i < a;i++){
        cin >> vec[i];
    }

    if(ehPar(a)){
        cout << "é par" << endl;
    }else{
        cout << "é ímpar" << endl;
    }

    cout << fatorial(a) << endl;

    if(ehPrimo(a)){
        cout << "é primo" << endl;
    }else{
        cout << "não é primo" << endl;
    }

    cout << a << " Graus Celsius são " << celsius4farenhait(a) << " graus Farenhait" << endl;

    cout << somavet(vec) << endl;

}
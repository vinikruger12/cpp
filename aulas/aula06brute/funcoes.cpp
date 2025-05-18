#include <bits/stdc++.h>

using namespace std;

int maior(int a, int b){
    if(a > b){
      return a;
    }else{
      return b;
    }

}

int menor(int a, int b){
    if(a > b){
        return b;
    }else{
        return a;
    }
}

int soma_(int a, int b){
    return a+b;
}

int multi(int a, int b){
    return a*b;
}



int main(){
    int um, dois;
    cin >> um >> dois;
    cout << maior(um, dois) << endl;
    cout << menor(um, dois) << endl;
    cout << soma_(um, dois) << endl;
    cout << multi(um, dois) << endl;
}
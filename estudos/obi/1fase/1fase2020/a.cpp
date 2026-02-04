#include <bits/stdc++.h>

using namespace std;

int main(){
    int d; cin >> d;



    if(d == 6){
        cout << 1 << endl;
    }else if(d == 7){
        cout << 2 << endl;
    }else if(d == 8){
        cout << 3 << endl;
    }else{

    if(d > 8){
        d = d - 11;
    }

    while(d - 8 > 0){
        d = d - 8;
    }

    if(d - 3 == 0){
        cout << 1 << endl;
    }else if(d - 4 == 0){
        cout << 2<< endl;
    }else if(d - 5 == 0){
        cout << 3 << endl;
    }
}


    //1 - 6km
    //2 - 7km
    //3 - 8km

    // a partir de 11 (volta completa) + 8 depois
    //1 - 3km
    //2 - 4km
    //3 - 5km
}

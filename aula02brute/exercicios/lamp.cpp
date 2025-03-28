#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int i1;
    int i2;
    int n;

    i1 = false;
    i2 = false;
   

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 1){
            i1 = !i1;
        }else if(a == 2){
            i1 = !i1;
            i2 = !i2;
        }
    }
    cout << i1 << endl;
    cout << i2;
}

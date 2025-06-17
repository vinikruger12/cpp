#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, p, f, d; cin >> h >> p >> f >> d;

    vector<int> vec(32);
    for(int i = 0;i < 16;i++){
        vec[i] = i;
    }

    for(int i = 16;i < 32;i++){
        vec[i] = i - 16;
    }

    
    
if(d == -1){
    for(int i = (f+16);i >= 0;i--){
       
        if(p == vec[i]){
        cout << 'N' << endl;
        break;
        }

        if(vec[i] == h){
        cout << 'S' << endl;
        break;
        }
       
    }
    
}

else if(d == 1){
    for(int i = f;i < 32;i++){

        if(p == vec[i]){
            cout << 'N' << endl;
            break;
        }
        else if(h == vec[i]){
             cout << 'S' << endl;
            break;
        }
    }
   }


}
#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
    string a, b; cin >> a >> b;
    
    for(int i = 0;i < a.size();i++){
        a[i] = tolower(a[i]);
    }

    for(int i = 0;i < b.size();i++){
        b[i] = tolower(b[i]);
    }

    int first = 0, second = 0;
    for(int i = 0;i < a.size();i++){
        first += a[i];
        second += b[i];
        
        if(first > second){
            cout << 1 << endl;
            break;
        }
        else if(second > first){ 
            cout << -1 << endl;
            break;
        }
       
    }

     if(first == second) cout << 0 << endl;
        

}   
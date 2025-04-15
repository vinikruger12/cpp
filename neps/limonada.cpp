#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c;
    cin >> n;
    cin >> c;
    int p = 0;
    
    for(int i = 0; i < n; i++){
      
       if(c-i > 0){
            p += (c - i);
       }
        
        else if(c-i >= 0){
    }
    
    cout << p << endl;
}
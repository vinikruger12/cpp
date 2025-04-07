#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> vec(n);
   

    for(int i = 0; i < n; i++){
         cin >> vec[i];
    }

    
    for(int i = 0; i < n; i++){
        int count = 0;

        if(i - 1 >= 0) count += vec[i - 1];
        count += vec[i];                    
        if(i + 1 < n) count += vec[i + 1];  

        cout << count << endl;
    }

}
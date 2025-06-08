    #include <bits/stdc++.h>
    using namespace std;

    int digitos(int a){
        vector<int> vec(2);
        
            vec[0] = a % 10;
            a = a - vec[0];
            vec[1] = a / 10;  
        
            return vec[0] + vec[1];
    }

    int main(){
        int t;cin >> t;
        int a;
        while(t--){
            cin >> a;
            cout << digitos(a) << endl;
        }
    }
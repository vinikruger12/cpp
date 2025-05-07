#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n;i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int mostra = 0;
    int d; cin >> d;
    vector<int> valores(d);
    for(int i = 0; i < d;i++){
        cin >> valores[i];

        int l = 0;
        int r = n - 1;

        while(l <= r){
            int mid = r;

            if(vec[mid] > valores[i]){
                r = mid - 1;
                
            }else if(vec[mid] <= valores[i]){
                mostra++;
                r = mid + 1;
            }else{
                r = mid - 1;
            }
            
        }
        cout << mostra << endl;
        mostra = 0;
      
        
    }


}
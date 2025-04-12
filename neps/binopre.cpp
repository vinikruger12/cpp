#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);

    int div2 = 0;
    int div3 = 0;
    int div4 = 0;

    for(int i = 0; i < n; i++){
        cin >> vec[i];

        if(vec[i] % 2 == 0){
            div2++;
        }
        if(vec[i] % 3 == 0){
            div3++;
        }
        if(vec[i] % 4 == 0){
            div4++;
        }
    }

    cout << div2 << endl;
    cout << div3 << endl;
    cout << div4 << endl;
}
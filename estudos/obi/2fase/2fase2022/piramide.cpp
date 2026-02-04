#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> mat((n), vector<int> (n));
    int louco = n;

        int a = 1;
        int b = 0;
        int k = 0;


    while(n > 0){

        for(int i = k;i < n;i++){
            for(int j = k;j < n;j++){
                if(i == b || i == (n-1) || j == b || j == (n-1)){
                    mat[i][j] = a;
                }
            }
        }

        k++;
        a++;
        b++;
        n--;
    }

    for(int i = 0;i < louco;i++){
        for(int j = 0;j < louco;j++){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }

}
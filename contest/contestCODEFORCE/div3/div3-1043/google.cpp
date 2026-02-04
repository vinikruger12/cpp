#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> mat((n), vector<int> (m));
    int c = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1) c++;
        }
    }


    bool f = 0;
    while(!f){
        int res = sqrt(c);
        double res1 = sqrt(c);
        if(res == res1){
            f = 1;
        }
        else{
            c--;
        }
    }

    c = sqrt(c);

    for(int i = 0;i < c;i++){
        for(int j= 0;j < c;j++){
            cout << 1 << ' ';
        }
        cout << endl;
    }
    
}
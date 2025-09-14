#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a;
    for(int i = 0;i < n+1;i++){
        int b; cin >> b;
        a.emplace_back(b);
    }

    int res = 0;

    
    while(a.size() > 1){

        if(a.back() == 0){
            a.pop_back();
            res++;
        }
        else if(a.back() == 1){
            a.emplace_back(5);

            for(int i = (a.size() - 1); i > 0;i--){
                a[i] = a[i-1];
            }

            for(int i = 1;i < a.size() - 1;i++){
                if(a[i] == 1 && a[i+1] == 1){
                    a[i] += 2;
                }
                else if(a[i] == 1 && a[i+1] == 0){
                    a[i] += 1;
                }
                else if(a[i] == 0 && a[i+1] == 1){
                    a[i] += 1;
                }
                else if(a[i] == 0 && a[i+1] == 0){
                    a[i] += 0;
                }
            }

            a[a.size() - 1] = 0;

            for(int i = 0;i < a.size() - 1;i++){
                if(a[i] == 2) a[i] = 1;
                else if(a[i] == 3) a[i] = 0;
            }

            res++;
        }
    }

    cout << res << endl;

}
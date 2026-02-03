#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> a;
int n;

void bs(int tempo){
    int l = -1, r = n;
    int mid = (l+r)/2;

    while(r - l > 1){

        mid = (l+r)/2;
        if(a[mid] > tempo){
            r = mid;
        }
        else{
            l = mid;
        }
    }

    cout << l + 1 << endl;

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int k; cin >> n >> k;
   int tempo = 240 - k;
   a.resize(n);
   a[0] = 5;
   for(int i = 1;i < n;i++){
    a[i] = ((i + 1) * 5) + a[i-1];
   } 

   bs(tempo);
}

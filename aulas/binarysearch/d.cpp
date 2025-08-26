#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> vec;

int up(int l, int r, int x){
    int res = n;
    while(l <= r){
        int mid = (l+r)/2;
        if(vec[mid] > x){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int lb(int l, int r, int x){
    int res = n;
    while(l <= r){
        int mid = (l+r)/2;
        if(vec[mid] >= x){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int main(){
    cin >> n;
    vec.resize(n);
    for(int i = 0;i < n;i++) cin >> vec[i];

    sort(vec.begin(), vec.end());

    int t; cin >> t;
    while(t--){
       int a, b; cin >> a >> b;
       int aa = lb(0, (n-1), a);
       int bb = up(0, n-1, b);
       aa--;
       bb--;

       cout << bb - aa << endl;

    }
}
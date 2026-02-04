#include <bits/stdc++.h>
#define ll long long
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

ordered_set st;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> pares(n); 
        for(int i = 0;i < n;i++){
            int a, b; cin >> a >> b;
            pares[i] = {b, a};
        }

        sort(pares.begin(), pares.end());

        ll res = 0;
        st.clear();
        for(auto [b, a] : pares){
            res += st.size() - st.order_of_key(a);
            st.insert(a);
        }

        cout << res << endl;
    }


}
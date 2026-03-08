#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
   string s; cin >> s;
   int ans = 0;
   for(int i = 0;i < s.size();i++){
      if(ans == 0 && s[i] == 'h') ans++;
      if(ans == 1 && s[i] == 'e') ans++;
      if((ans == 2 || ans == 3) && s[i] == 'l') ans++;
      if(ans == 4 && s[i] == 'o') ans++;
   }
   if(ans == 5) cout << "YES" << endl;
   else cout << "NO" << endl;
}   
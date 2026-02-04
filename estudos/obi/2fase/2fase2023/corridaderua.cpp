#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  
  int hmax = 0, hmin = 0, lmax = 0, lmin = 0, l = 0, h = 0;

  while(n--){
    int c;
    char le;
    cin >> c >> le;

    

    if(le == 'N') h += c;
    else if(le == 'S') h -= c;
    else if(le == 'L') l += c;
    else if(le == 'O') l -= c;

    hmax = max(h, hmax);
    hmin = min(h, hmin);
    lmax = max(l, lmax);
    lmin = min(l, lmin);
   }

   hmax++;
   hmin--;
   lmin--;
   lmax++;

   hmax -= hmin;
   lmax -= lmin;

   cout << (2*hmax) + (2*lmax) << endl;
}
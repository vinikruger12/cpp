#include <bits/stdc++.h>
using namespace std;

int main(){
   string a;
   string b;

   cin >> a >> b;
   cout << a.size() << " " << b.size() << endl;
   cout << a << b << endl;

   swap(a[0], b[0]); //troca os dois primeiros
   cout << a << " " << b << endl;
}

#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
   int maior = 0, menor = 0;
   string s; cin >> s;
   for(int i = 0;i < s.size();i++){
      if(s[i] >= 'a' && s[i] <= 'z') menor++;
      else maior++;
   }

   if(maior > menor){
      for(int i = 0;i < s.size();i++){
         if(s[i] >= 'A' && s[i] <= 'Z') cout << s[i];
         else{
            char c = toupper(s[i]);
            cout << c;
         }
      }
      cout << endl;
   }
   else{
      for(int i = 0;i < s.size();i++){
         if(s[i] >= 'a' && s[i] <= 'z') cout << s[i];
         else{
            char c = tolower(s[i]);
            cout << c;
         }
      }
      cout << endl;      
   }
}   
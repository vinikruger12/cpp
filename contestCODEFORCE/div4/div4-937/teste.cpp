#include <bits/stdc++.h>

using namespace std;


int main(){
   int aux = 12221;
   map<int, int> freq;
   while(aux % 11 == 0){
    aux /= 11;
   }

    string s = to_string(aux);
    cout << s << endl;
    
    for(int i = 0;i < s.size();i++) freq[s[i]]++;
    cout << freq['0'] << ' ' << freq['1'] << ' ' << s.size() << endl;
}
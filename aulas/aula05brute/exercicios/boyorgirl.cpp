#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    set<int> st;
    for(auto u:s){
        st.insert(u);
    }

    if(st.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    stack<char> st;

    for(char u:s){
        if(u == '{' || u == '[' || u == '('){
            st.push(u);
        }else{
            if(st.empty()){
                cout << "false" << endl;
            }

            char c;
            c = st.top();
            if((c == '(' && u == ')') || (c == '[' && u == ']') || (c == '{' && u == '}')){
                st.pop();
            }else{
                cout << "false" << endl;
            }
        }
    }

    if(st.empty()){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    set<int> c,e,u,p;
    int contap = 0, contae = 0, contau = 0, contac = 0;

    for(int i = 0;i < s.size();i = i + 3){
        if(s[i+2] == 'P'){
           int t = stoi(s.substr(i,i+2)); 
            p.insert(t);
            contap++;
        }
          if(s[i+2] == 'C'){
           int t = stoi(s.substr(i,i+2)); 
            c.insert(t);
            contac++;
        }
          if(s[i+2] == 'E'){
            int t = stoi(s.substr(i,i+2));
            e.insert(t);
            contae++;
        }
          if(s[i+2] == 'U'){
            int t = stoi(s.substr(i,i+2));
            u.insert(t);
            contau++;
        }
    }


    if(contac != c.size()){
        cout << "erro" << endl;
    }else{
        cout << 13 - contac << endl;
    }

    if(contae != e.size()){
        cout << "erro" << endl;
    }else{
        cout << 13 - contae << endl;
    }

    if(contau != u.size()){
        cout << "erro" << endl;
    }else{
        cout << 13 - contau << endl;
    }

    if(contap != p.size()){
        cout << "erro" << endl;
    }else{
        cout << 13 - contap << endl;
    }
}
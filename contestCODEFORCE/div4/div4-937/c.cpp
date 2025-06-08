#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int horas = stoi(s.substr(0,2));
        string minutos = s.substr(2);

        if(horas == 0){
            cout << 12 << minutos << " AM" << endl;
        }
        else if(horas < 12){
            if(horas < 10){
                cout << 0 << horas << minutos << " AM" << endl;
            }else{
                  cout << horas << minutos << " AM" << endl;
        }}
        else if(horas == 12){
            cout << horas << minutos << " PM" << endl;
        }
        else if(horas > 12){
            if(horas - 12 < 10){
                cout << 0 << horas - 12 << minutos << " PM" << endl;
            }else{
            cout << horas - 12 << minutos << " PM" << endl;
        }}
    }
}

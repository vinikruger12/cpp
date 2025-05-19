    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int t; cin >> t;
        while(t--){
            string s;
            cin >> s;
            if(s[0] == '1' && s[1] >= '3'){
                cout << s[0]-'1' << s[1]-'2' << s[2] << s[3] << s[4] << " PM";
                cout << endl;
            
            }else if(s[0] == '2') {
            int hora = stoi(s.substr(0, 2));
            hora -= 12; 
            cout << (hora < 10 ? "0" : "") << hora << s.substr(2) << " PM" << endl;
}
            
            
            else if(s[0] == '1' && s[1] < '2' && s[1] > '0' || s[0] == '0' && s[1] <= '9' && s[1] > '0'){
                cout << s << " AM" << endl;
            }

            else if(s[0] == '0' && s[1] == '0'){
                cout << 12 << s[2] << s[3] << s[4] << " AM" << endl;
            
            }
            else if(s[0] == '1' && s[1] == '2'){
                cout << s << " PM" << endl;
            }
    }
}



// trabalhar com a funcao stoi depois //

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int hora = stoi(s.substr(0, 2)); // pega os dois primeiros caracteres como hora
        string minutos = s.substr(2);    // pega o restante (:MM)

        if (hora == 0) {
            cout << "12" << minutos << " AM" << endl;
        } else if (hora < 12) {
            cout << (hora < 10 ? "0" : "") << hora << minutos << " AM" << endl;
        } else if (hora == 12) {
            cout << "12" << minutos << " PM" << endl;
        } else { // hora > 12
            hora -= 12;
            cout << (hora < 10 ? "0" : "") << hora << minutos << " PM" << endl;
        }
    }
}

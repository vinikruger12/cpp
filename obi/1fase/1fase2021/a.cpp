        #include <bits/stdc++.h>
        
        using namespace std;

        int main(){
            char c;
            int v = 0;
            for(int i =0;i < 6;i++){
                cin >> c;
                if(c == 'V'){
                    v++;
                }
            }

            if(v == 0){
                cout << -1 << endl;
            }else if(v <= 2){
                cout << 3 << endl;
            }else if(v <= 4){
                cout << 2 << endl;
            }else if(v <= 6){
                cout << 1 << endl;
            }
        }
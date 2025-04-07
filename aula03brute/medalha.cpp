#include <bits/stdc++.h>

using namespace std;

int main(){
    int t1;
    int t2;
    int t3;

    cin >> t1 >> t2 >> t3;

    if(t1 > t2 && t2 > t3){
        cout << "3" << endl;
        cout << "2" << endl;
        cout << "1" << endl;
    }
    else if(t2 > t1 && t1 > t3){
        cout << "3" << endl;
        cout << "1" << endl;
        cout << "2" << endl;
    }
    else if(t3 > t1 && t1 > t2){
        cout << "2" << endl;
        cout << "1" << endl;
        cout << "3" << endl;
    }
    else if(t1 > t3 && t3 > t2){
        cout << "2" << endl;
        cout << "3" << endl;
        cout << "1" << endl;
    }
    else if(t3 > t2 && t2 > t1){
        cout << "1" << endl;
        cout << "2" << endl;
        cout << "3" << endl;
    }
    else{
        cout << "1" << endl;
        cout << "3" << endl;
        cout << "2" << endl;
    }
}
#include <stdio.h>
#include <math.h>

int hiper(int n){
    int res = 1;
    for(int i = 1;i <= n;i++){
        res *= pow(i,i);
    }
    return res;
}

int hiper_rec(int n){
    if(n == 0) return 1;
    else return pow(n,n) * hiper_rec(n-1);
}

void copia(int v[], int n, int vp[], int vi[]){
    int j = 0, k = 0;
    for(int i = 0 ;i < n;i++){
        if(v[i] % 2 == 0){
            vp[j] = v[i];
            j++;
        }
        else{
            vi[k] = v[i];
            k++;
        }
    }
}


void max_linha(int mat[3][4], int vet[4]){
    int indice = 0, arm = 0, comp = 0;
    for(int i = 0;i < 3;i++){
        arm = 0;
        for(int j = 0;j < 4;j++) arm += mat[i][j];
        if(arm > comp){
            comp = arm;
            indice = i;
        }
    }
    for(int j = 0;j < 4;j++) vet[j] = mat[indice][j];
}

void inverte(char s[]){
    int n = 0;
    for(int i = 0;s[i] != 0;i++) n++;

    int l = 0, r = (n-1);
    char arm;
    while(l < r){
        arm = s[l];
        s[l] = s[r];
        s[r] = arm;
        r--;
        l++;
    }
    s[n] = 0;
}

int main(){
    char s[100]; scanf("%s", s);
    inverte(s);
    printf("%s", s);
}
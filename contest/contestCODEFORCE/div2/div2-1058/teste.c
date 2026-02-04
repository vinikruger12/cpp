#include <stdio.h>

void substring(char orig[], char dest[], int ini, int fim){
    int j = 0;
    for(int i = ini;i <= fim && orig[i] != 0;i++){
        dest[j] = orig[i];
        j++;
    }
    dest[j] = 0;
}

int main(){
    char s[100]; 
    fgets(s, 100, stdin);
    char dest[100];
    substring(s, dest, 8, 13);
    printf("%s\n", dest);
}
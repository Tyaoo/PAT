#include<bits/stdc++.h>
using namespace std;

int func(char *str, char d){

    int res = 0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]==d){
            res = res*10 + (d-'0');
        }
    }
    return res;
}

int main(){
    char A[10], B[10];
    char DA, DB;
    scanf("%s %c %s %c", A, &DA, B, &DB);
    int PA = func(A, DA);
    int PB = func(B, DB);
    printf("%d", PA+PB);
}



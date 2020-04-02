#include<bits/stdc++.h>
using namespace std;

int s2i(char *s){
    int res = 0;
    for(int i=0; i<strlen(s); i++){
        res = res*10 + (s[i]-'0');
    }
    return res;
}

int cmp(char x, char y){
    return y<x;
}

int main(){
    int n;
    char num[4];
    scanf("%d", &n);
    sprintf(num, "%04d", n);
    int res = 0;
    do{
        sort(num, num+4, cmp);
        int numMax = s2i(num);
        sort(num, num+4);
        int numMin = s2i(num);
        res = numMax - numMin;
        printf("%04d - %04d = %04d\n", numMax, numMin, res);
        if(res==0) break;
        sprintf(num, "%04d", res);
    } while(res!=6174);
    return 0;
}



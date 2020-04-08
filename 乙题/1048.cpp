#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[101], b[101];
    scanf("%s %s", a, b);
    int len1 = strlen(a);
    int len2 = strlen(b);
    int len = len1>len2? len1: len2;
    char chset[14] = "0123456789JQK";
    int i = 0;
    for(int i=0; i<len; i++){
        int nb = i<(len-len2)? 0: b[i-len+len2]-'0';
        int na = i<(len-len1)? 0: a[i-len+len1]-'0';
        if((len-i)%2 == 1){
            putchar(chset[(nb + na) % 13]);
        }
        else{
            putchar(((nb - na + 10) % 10) + '0');
        }
    }
    return 0;
}

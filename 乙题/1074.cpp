#include<bits/stdc++.h>
using namespace std;

int main(){
    char n[21], x[21], y[21], keys[22];
    memset(keys, '\0', 22 * sizeof(char));
    scanf("%s %s %s", n, x, y);
    int len0 = strlen(n);
    int len1 = strlen(x);
    int len2 = strlen(y);
    int len = len1>len2? len1: len2;
    int excess = 0;
    for(int i = 0; i < len; i++){
        char d = len0-1-i>=0? n[len0-1-i]: '0';
        char a = len1-1-i>=0? x[len1-1-i]: '0';
        char b = len2-1-i>=0? y[len2-1-i]: '0';
        int res = (a-'0') + (b-'0') + excess;
        int D = d=='0'? 10: d-'0';
        excess = res / D;
        res %= D;
        keys[i] = res + '0';
        if(i == len - 1 && excess > 0){
            keys[i+1] = excess + '0';
        }
    }
    int head = 1;
    for(int i = strlen(keys)-1; i >= 0; i--){
        if(head == 1 && keys[i] == '0')
            continue;
        else{
            head = 0;
            putchar(keys[i]);
        }
    }
    if(head == 1)
        printf("0");
    return 0;
}

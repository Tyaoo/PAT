#include<bits/stdc++.h>
using namespace std;

int check(char *s){
    int len = strlen(s);
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[1005];
    scanf("%s", str);
    int cnt = 0;
    while(check(str) == 0){
        int len = strlen(str);
        int index;
        char res[1005];
        memset(res, '\0', 1005 * sizeof(char));
        int excess = 0;
        for(index = 0; index < len; index++){
            res[index] = ((str[index]-'0') + (str[len-1-index]-'0') + excess) % 10 + '0';
            excess = ((str[index]-'0') + (str[len-1-index]-'0') + excess) / 10;
        }
        if(excess > 0){
            res[index++] = excess + '0';
        }
        for(int i = 0; i < index / 2; i++){
            char tmp = res[i];
            res[i] = res[index-1-i];
            res[index-1-i] = tmp;
        }
        printf("%s", str);
        printf(" + ");
        for(int i = 1; i <= len; i++){
            printf("%c", str[len-i]);
        }
        printf(" = ");
        printf("%s\n", res);
        strcpy(str, res);
        cnt++;
        if(cnt >= 10)
            break;
    }
    if(cnt < 10){
        printf("%s is a palindromic number.", str);
    }
    else{
        printf("Not found in 10 iterations.");
    }
}

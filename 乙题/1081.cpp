#include<bits/stdc++.h>
using namespace std;

void check(char *str){
    int len = strlen(str);
    if(len < 6){
        printf("Your password is tai duan le.\n");
        return;
    }

    int hasDigits = 0;
    int hasLetters = 0;

    for(int i = 0; i < len; i++){
        if(!((str[i]>='0'&&str[i]<='9')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||str[i]=='.')){
            printf("Your password is tai luan le.\n");
            return;
        }
        if(str[i]>='0'&&str[i]<='9')
            hasDigits = 1;
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            hasLetters = 1;
    }

    if(hasDigits == 0){
        printf("Your password needs shu zi.\n");
        return;
    }

    if(hasLetters == 0){
        printf("Your password needs zi mu.\n");
        return;
    }

    printf("Your password is wan mei.\n");
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++){
        char tmp[81];
        getchar();
        scanf("%[^\n]", tmp);
        check(tmp);
    }
}

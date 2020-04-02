#include<stdio.h>
#include<string.h>

int check(char *str);

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    while(n--){
        char str[101];
        gets(str);
        if(check(str)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

int check(char *str){
    int Acnt = 0;
    int Pcnt = 0;
    int Tcnt = 0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='A'){
            Acnt++;
        }
        else if(str[i]=='P'){
            Pcnt++;
        }
        else if(str[i]=='T'){
            Tcnt++;
        }
        else{
            return 0;
        }
    }
    if(Pcnt!=1 || Tcnt!=1 || !Acnt){
        return 0;
    }
    int A1cnt,A2cnt,A3cnt;
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='P'){
            A1cnt = i;
            for(int j=i+1; i<strlen(str); j++){
                if(str[j]=='T'){
                    A2cnt = j - i - 1;
                    A3cnt = strlen(str) - j - 1;
                    if(A1cnt*A2cnt == A3cnt){
                        return 1;
                    }
                    else{
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}

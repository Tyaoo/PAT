#include<stdio.h>
#include<string.h>

void di2huo(char *s){
    char chset1[13][5] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char chset2[13][5] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int num = 0;
    for(int i=0; i<strlen(s); i++){
        num = num * 10 + (s[i] - '0');
    }
    int index = 0;
    char res[2][5];
    for(int i=0; i<2; i++){
        memset(res[i], '\0', 5 * sizeof(char));
    }
    if(num == 0){
        printf("tret");
        return;
    }
    while(num > 0){
        int tmp = num % 13;
        if(index == 0){
            strcpy(res[index++], chset1[tmp]);
        }
        else{
            strcpy(res[index++], chset2[tmp]);
        }
        num /= 13;
    }
    if(index>1 && strcmp(res[0], "tret")==0){
        printf("%s", res[index-1]);
    }
    else{
        for(int i=index-1; i>=0 ;i--){
            printf("%s", res[i]);
            if(i > 0) printf(" ");
        }
    }
}

void huo2di(char *s){
    char chset1[13][5] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char chset2[13][5] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    char *p;
    char ss[2][5];
    for(int i=0; i<2; i++){
        memset(ss[i], '\0', 5 * sizeof(char));
    }
    int len = 0;
    while((p = strtok(s, " ")) != NULL){
        strcpy(ss[len++], p);
        s = NULL;
    }
    int res = 0;
    for(int i=0; i<len; i++){
        for(int k=0; k<13; k++){
            if(strcmp(ss[i], chset1[k]) == 0){
                res += k;
                break;
            }
        }
        for(int k=0; k<13; k++){
            if(strcmp(ss[i], chset2[k]) == 0){
                res += k*13;
                break;
            }
        }
    }
    printf("%d", res);
}

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    while(n--){
        char tmp[100];
        gets(tmp);
        if(tmp[0] >= '0' && tmp[0]<='9'){
            di2huo(tmp);
        }
        else{
            huo2di(tmp);
        }
        if(n > 0){
            printf("\n");
        }
    }
}

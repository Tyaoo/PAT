#include<stdio.h>
#include<string.h>

int main(){
    char str[1001];
    gets(str);
    int cnt[128] = {0};
    for(int i=0; i<strlen(str); i++){
        if(str[i] == ' '){
            continue;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            cnt[str[i]+32]++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            cnt[str[i]]++;
        }
    }
    int index = 0;
    for(int i=0; i<128; i++){
        if(cnt[i] > cnt[index]){
            index = i;
        }
    }
    printf("%c %d", index, cnt[index]);
}

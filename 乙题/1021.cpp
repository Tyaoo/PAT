#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[1000];
    scanf("%s", str);
    int cnt[10];
    for(int i=0; i<10; i++)
        cnt[i] = 0;
    for(int i=0; i<strlen(str); i++){
        cnt[(str[i]-'0')]++;
    }
    for(int i=0; i<10; i++){
        if(cnt[i]>0){
            printf("%d:%d\n", i, cnt[i]);
        }
    }
}



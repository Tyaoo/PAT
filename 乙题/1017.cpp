#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[1000];
    int b;
    char c[1000];
    int tmp = 0;
    scanf("%s %d", a, &b);
    int len = strlen(a);
    for(int i=0; i<len; i++){
        tmp = tmp*10 + (a[i]-'0');
        c[i] = tmp / b + '0';
        tmp = tmp % b;
    }
    int head = 0;
    for(int i=0; i<len; i++){
        if(c[i]!='0' && head==0)
            head = 1;
        if(head==1)
            printf("%c", c[i]);
    }
    if(head == 0){
        printf("0");
    }
    printf(" %d", tmp);
}



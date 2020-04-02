#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
#include<string.h>

int main(){
    char broke[128];
    char input[100001];
    int isBroke[128] = {0};

    gets(broke);
    gets(input);

    int brokeLen = strlen(broke);
    int inputLen = strlen(input);

    for(int i=0; i<brokeLen; i++){
        isBroke[broke[i]] = 1;
        if(broke[i]>='A' && broke[i]<='Z'){
            isBroke[broke[i]+32] = 1;
        }
        if(broke[i] == '+'){
            for(int j='A'; j<='Z'; j++)
                isBroke[j] = 1;
        }
    }

    for(int i=0; i<inputLen; i++){
        if(isBroke[input[i]]){
            continue;
        }else{
            putchar(input[i]);
        }
    }
    return 0;
}

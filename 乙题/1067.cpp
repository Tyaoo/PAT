#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int cnt = 0;
    char code[21];
    scanf("%s %d", code, &n);
    char pwd[50];
    getchar();
    while(scanf("%[^\n]", pwd) && strcmp(pwd, "#")!=0){
        if(strcmp(pwd, code) == 0){
            printf("Welcome in\n");
            break;
        }
        else{
            cnt++;
            printf("Wrong password: %s\n", pwd);
            if(cnt >= n){
                printf("Account locked\n");
                break;
            }
        }
        getchar();
    }
    return 0;
}

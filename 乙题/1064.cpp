#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int log[37] = {0};
    int cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        char str[5];
        int friendNum = 0;
        sprintf(str, "%d", num);
        for(int i = 0; i < strlen(str); i++){
            friendNum += str[i] - '0';
        }
        if(log[friendNum] == 0){
            log[friendNum] = 1;
            cnt ++;
        }
    }
    printf("%d\n", cnt);
    for(int i = 0; i < 37; i++){
        if(log[i] == 1){
            printf("%d", i);
            cnt--;
            if(cnt > 0)
                printf(" ");
            else
                break;
        }
    }
    return 0;
}

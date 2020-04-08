#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    char tmp[10];
    sprintf(tmp, "%d", a * b);
    int i;
    int head = 1;
    for(i = strlen(tmp)-1; i >= 0; i--){
        if(head && tmp[i]=='0'){
            continue;
        }
        else{
            head = 0;
            printf("%c", tmp[i]);
        }
    }
    return 0;
}

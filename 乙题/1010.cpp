#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2;
    if(scanf("%d%d", &num1, &num2)==2){
        if(num2 == 0){
            printf("0 0");
            return 0;
        }
        else{
            printf("%d %d", num1*num2, num2-1);
        }
    }
    while(scanf("%d%d", &num1, &num2)==2){
        if(num2 == 0){
            return 0;
        }
        if(num2 != 0){
            printf(" %d %d", num1*num2, num2-1);
        }
    }
    return 0;
}


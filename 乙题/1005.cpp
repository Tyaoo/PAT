#include<stdio.h>
#include<string.h>

int main(){
    int k;
    scanf("%d", &k);
    int clz[101] = {0};
    while(k--){
        int n;
        scanf("%d", &n);
        clz[n] = 1;
    }
    for(int i=0; i<101; i++){
        if(clz[i]){
            int j = i;
            while(j>1){
                if(j%2 == 0){
                    j = j/2;
                }
                else{
                    j = (3*j+1)/2;
                }
                if(j<101) clz[j] = 0;
            }
        }
    }
    int head = 1;
    for(int i=100; i>0; i--){
        if(clz[i]){
            if(head){
            head = 0;
            }
            else{
                printf(" ");
            }
            printf("%d", i);
        }
    }
}


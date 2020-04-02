#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int n;
    int res = 0;
    scanf("%d", &n);
    int num[n+1];
    for(int i=0; i<=n; i++){
        num[i] = 1;
    }

    for(int i=2; i<=n; i++){
        if(num[i]){
            for(int j=2; i*j<=n; j++)
                num[i*j] = 0;
        }
    }

    for(int i=2; i<=n; i++){
        if(i+2<=n && num[i] && num[i+2]){
            res++;
        }
    }
    printf("%d", res);
    return 0;
}


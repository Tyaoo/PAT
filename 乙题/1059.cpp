#include<bits/stdc++.h>
using namespace std;

int isPrime(int x){
    if(x <= 1){
        return 0;
    }
    if(x == 2 || x == 3){
        return 1;
    }
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int N, K;
    scanf("%d", &N);
    int ranks[10001] = {0};
    int check[10001] = {0};
    for(int i = 0; i < N; i++){
        int tmp;
        scanf("%04d", &tmp);
        ranks[tmp] = i + 1;
    }

    scanf("%d", &K);
    for(int i = 0; i < K; i++){
        int tmp;
        scanf("%04d", &tmp);
        if(check[tmp] == 0){
            if(ranks[tmp] > 0){
                if(ranks[tmp] == 1){
                    printf("%04d: Mystery Award\n", tmp);
                }
                else if(isPrime(ranks[tmp])){
                    printf("%04d: Minion\n", tmp);
                }
                else{
                    printf("%04d: Chocolate\n", tmp);
                }
                check[tmp] = 1;
            }
            else{
                printf("%04d: Are you kidding?\n", tmp);
            }
        }
        else{
            printf("%04d: Checked\n", tmp);
        }
    }
    return 0;
}

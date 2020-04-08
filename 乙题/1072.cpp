#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int ban[10000] = {0};
    int nameCnt = 0, thingCnt = 0;
    for(int i = 0; i < M; i++){
        int tmp;
        scanf("%d", &tmp);
        ban[tmp] = 1;
    }
    for(int i = 0; i < N; i++){
        char name[5];
        int num;
        int problem = 0;
        scanf("%s %d", name, &num);
        for(int j = 0; j < num; j++){
            int tmp;
            scanf("%04d", &tmp);
            if(ban[tmp] == 1){
                if(problem == 0){
                    problem = 1;
                    printf("%s: %04d", name, tmp);
                }
                else{
                    printf(" %04d", tmp);
                }
                thingCnt++;
            }
        }
        if(problem == 1){
            nameCnt++;
            printf("\n");
        }
    }
    printf("%d %d", nameCnt, thingCnt);
    return 0;
}

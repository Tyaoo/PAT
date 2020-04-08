#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int cnt[n];
    int maxCnt = 0;
    int cham[n];
    int chamCnt = 0;
    for(int i = 0; i < n; i++)
        cnt[i] = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int tmp;
            scanf("%d", &tmp);
            cnt[j] += tmp;
            if(i == m - 1){
                if(cnt[j] > maxCnt){
                    chamCnt = 0;
                    cham[chamCnt++] = j + 1;
                    maxCnt = cnt[j];
                }
                else if(cnt[j] == maxCnt){
                    cham[chamCnt++] = j + 1;
                }
            }
        }
    }
    printf("%d\n", maxCnt);
    for(int i = 0; i < chamCnt; i++){
        printf("%d", cham[i]);
        if(i < chamCnt - 1)
            printf(" ");
    }
    return 0;
}

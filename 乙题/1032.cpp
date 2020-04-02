#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int sum[N+1];
    for(int i=1; i<=N; i++)
        sum[i] = 0;
    int cnt = 0;
    int maxIndex = 1;
    int maxScore = 0;
    for(int i=1; i<=N; i++){
        int id, score;
        scanf("%d %d", &id, &score);
        if(id > cnt) cnt = id;
        sum[id] += score;
    }
    for(int i=1; i<=cnt; i++){
        if(sum[i] > maxScore){
            maxScore = sum[i];
            maxIndex = i;
        }
    }
    printf("%d %d", maxIndex, maxScore);
}

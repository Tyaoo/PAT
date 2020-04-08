#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int sum[10001] = {0};
    while(n--){
        int a, b, c;
        scanf("%d-%d %d", &a, &b, &c);
        sum[a] += c;
    }
    int index = 0;
    int maxScore = 0;
    for(int i=0; i<10001; i++){
        if(sum[i] > maxScore){
            index = i;
            maxScore = sum[i];
        }
    }
    printf("%d %d", index, maxScore);
}

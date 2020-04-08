#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int cnt[10000] = {0};
    for(int i = 0 ; i< n; i++){
        int bac;
        scanf("%d", &bac);
        cnt[abs(i+1-bac)]++;
    }
    for(int i = 10000-1; i >= 0; i--){
        if(cnt[i] > 1){
            printf("%d %d\n", i, cnt[i]);
        }
    }
    return 0;
}

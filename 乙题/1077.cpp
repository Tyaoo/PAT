#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        int g1[n-1];
        double G1 = 0.0, G2;
        int res;
        int cnt = 0;
        scanf("%lf", &G2);
        for(int j = 0; j < n-1; j++){
            int tmp;
            scanf("%d", &tmp);
            if(tmp >=0 && tmp <=m){
                g1[cnt++] = tmp;
            }
        }
        sort(g1, g1 + cnt);
        for(int j = 1; j < cnt-1; j++){
            G1 += g1[j];
        }
        G1 /= (cnt - 2);
        res = round((G1 + G2) / 2);
        printf("%d\n", res);
    }
    return 0;
}

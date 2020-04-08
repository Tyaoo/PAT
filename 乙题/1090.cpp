#include<bits/stdc++.h>
using namespace std;

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int pai[n][2];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &pai[i][0], &pai[i][1]);
    }
    for(int i = 0; i < m; i++){
        int k;
        scanf("%d", &k);
        int cargo[k];
        int flag = 1;
        for(int j = 0; j < k; j++){
            scanf("%d", &cargo[j]);
        }
        qsort(cargo, k, sizeof(int), cmp);
        for(int j = 0; j < n; j++){
            if(bsearch(&pai[j][0], cargo, k, sizeof(int), (int(*)(const void *,const void *))cmp) &&
               bsearch(&pai[j][1], cargo, k, sizeof(int), (int(*)(const void *,const void *))cmp)){
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("Yes");
        else
            printf("No");
        if(i < m - 1)
            printf("\n");
    }
    return 0;
}

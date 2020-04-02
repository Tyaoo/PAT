#include<bits/stdc++.h>
using namespace std;

int cmp(int *a, int *b, int n){
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int org1[n], org2[n], mid[n];
    for(int i=0; i<n; i++){
        scanf("%d", &org1[i]);
        org2[i] = org1[i];
    }
    for(int i=0; i<n; i++)
        scanf("%d", &mid[i]);

    // Insertion Sort
    int insSign = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j>0; j--){
            if(org1[j] < org1[j-1]){
                int tmp = org1[j];
                org1[j] = org1[j-1];
                org1[j-1] = tmp;
            }
            else{
                break;
            }
        }
        if(insSign){
            if(cmp(org1, mid, n)!=1)
                break;
        }
        if(cmp(org1, mid, n)==1){
            insSign = 1;
        }
    }

    if(insSign == 1){
        printf("Insertion Sort\n");
        for(int i=0; i<n; i++){
            printf("%d", org1[i]);
            printf("%c", i<n-1?' ':'\n');
        }
            return 0;
    }

    // Merge Sort
    int merSign = 0;
    int mer = 2;
    while(1){
        // printf("merge %d\n", mer);
        for(int i=0; i<floor((n-1)/mer)+1; i++){
            int l = i * mer;
            int r = (i + 1) * mer;
            if(r > n) r = n;
            // printf("%d %d %d\n", i, l, r);
            sort(org2+l, org2+r);
        }
        mer *= 2;
        if(merSign){
            if(cmp(org2, mid, n)!=1)
                break;
        }
        if(cmp(org2, mid, n)==1){
            merSign = 1;
            // printf("next stop\n");
        }
    }

    if(merSign == 1){
        printf("Merge Sort\n");
        for(int i=0; i<n; i++){
            printf("%d", org2[i]);
            printf("%c", i<n-1?' ':'\n');
        }
            return 0;
    }
}

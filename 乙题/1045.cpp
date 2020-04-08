#include<bits/stdc++.h>
using namespace std;

typedef struct Nums{
    int index;
    long data;
}Num;

int cmp(Num x, Num y){
    return x.data < y.data;
}

int main(){
    int n;
    scanf("%d", &n);
    Num nums[n];
    for(int i=0; i<n; i++){
        scanf("%ld", &nums[i].data);
        nums[i].index = i;
    }
    sort(nums, nums+n, cmp);
    int res[n];
    int cnt = 0;
    int maxi = 0;
    for(int i=0; i<n; i++){
        if(nums[i].index > maxi){
            maxi = nums[i].index;
        }
        if(i == nums[i].index && i >= maxi){
            res[cnt++] = nums[i].data;
        }
    }
    printf("%d\n", cnt);
    if(cnt == 0){
        printf("\n");
    }
    for(int i=0; i<cnt; i++){
        printf("%ld", res[i]);
        if(i < cnt-1) printf(" ");
    }
    return 0;
}

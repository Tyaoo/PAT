#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    char nums[n][20];
    int isVal[n];
    for(int i=0; i<n; i++)
        isVal[i] = 0;
    int cnt = 0;
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};

    for(int i=0; i<n; i++){
        scanf("%s", nums[i]);
        int val = 1;
        int check = 0;
        for(int j=0; j<17; j++){
            if(nums[i][j]<'0' || nums[i][j]>'9'){
                val = 0;
                break;
            }
            else{
                check += weight[j] * (nums[i][j]-'0');
            }
        }
        if(val){
            check %= 11;
            if(nums[i][17] == M[check]){
                isVal[i] = 1;
                cnt++;
            }
        }
    }

    if(cnt == n){
        printf("All passed");
    }
    else{
        for(int i=0; i<n; i++){
            if(isVal[i]==0){
                printf("%s\n", nums[i]);
            }
        }
    }
}

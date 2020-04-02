#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long p;
    scanf("%d %ld", &n, &p);
    long nums[n];
    for(int i=0; i<n; i++)
        scanf("%ld", &nums[i]);
    sort(nums, nums+n);
    int len = 0;
    for(int i=0; i<n; i++){
        for(int j=i+len; j<n; j++){
            if(nums[j] <= nums[i]*p)
                len++;
            else
                break;
        }
    }
    printf("%d",len);
}

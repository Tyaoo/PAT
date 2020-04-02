#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    scanf("%d", &k);
    int num[k];
    int A1 = 0;
    int cnt1 = 0;
    int A2 = 0;
    int cnt2 = 0;
    int sign2 = 1;
    int cnt3 = 0;
    double A4 = 0;
    int cnt4 = 0;
    int A5 = 0;
    int cnt5 = 0;
    for(int i=0; i<k; i++){
        scanf("%d", &num[i]);
    }
    for(int i=0; i<k; i++){
        if(num[i]%5 == 0){
            if(num[i]%2==0){
                A1 += num[i];
                cnt1++;
            }
        }
        else if(num[i]%5 == 1){
            A2 += sign2 * num[i];
            sign2 *= -1;
            cnt2++;
        }
        else if(num[i]%5 == 2){
            cnt3++;
        }
        else if(num[i]%5 == 3){
            A4 += num[i];
            cnt4++;
        }
        else{
            if(num[i]>A5) A5 = num[i];
            cnt5++;
        }
    }
    if(cnt1==0){
        printf("N ");
    }
    else{
        printf("%d ", A1);
    }
    if(cnt2==0){
        printf("N ");
    }
    else{
        printf("%d ", A2);
    }
    if(cnt3==0){
        printf("N ");
    }
    else{
        printf("%d ", cnt3);
    }
    if(cnt4==0){
        printf("N ");
    }
    else{
        printf("%.1f ", A4/cnt4);
    }
    if(cnt5==0){
        printf("N");
    }
    else{
        printf("%d", A5);
    }
}


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int num[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                sum += num[i] * 10 + num[j];
            }
        }
    }
    printf("%d", sum);
}

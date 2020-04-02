#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int num[n];
    for(int i=0; i<n; i++){
        scanf("%d", &num[(i+k)%n]);
    }
    for(int i=0; i<n; i++){
        printf("%d", num[i]);
        if(i<n-1) printf(" ");
    }
}


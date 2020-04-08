#include<bits/stdc++.h>
using namespace std;

int cmp(int x, int y){
    return x > y;
}

int main(){
    int n;
    scanf("%d", &n);
    int days[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &days[i]);
    }
    sort(days, days + n, cmp);
    int e;
    for(e = n; e > 0; e--){
        if(days[e - 1] > e){
            break;
        }
    }
    printf("%d", e);
}

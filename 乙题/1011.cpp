#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    scanf("%d", &k);
    for(int i=1; i<k+1; i++){
        long a,b,c;
        scanf("%ld%ld%ld", &a, &b, &c);
        if(a+b>c){
            printf("Case #%d: true", i);
        }
        else{
            printf("Case #%d: false", i);
        }
        if(i<k) printf("\n");
    }
}


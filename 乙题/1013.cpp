#include<bits/stdc++.h>
using namespace std;

int check(int x);

int main(){
    int l,r;
    scanf("%d%d", &l, &r);
    int index = 2;
    int cnt = 0;
    int out = 0;
    while(cnt<r){
        if(check(index)){
            cnt++;
            if(cnt>=l){
                printf("%d", index);
                out++;
                if(cnt==r);
                else if(out%10==0){
                    printf("\n");
                }
                else{
                    printf(" ");
                }
            }
        }
        index++;
    }

}

int check(int x){
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}


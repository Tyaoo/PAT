#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    char str[100001];
    scanf("%s", str);
    ll cnt = 0;
    ll PA = 0;
    ll passP = 0;
    ll nowP = 0;
    int index = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if(str[i] == 'P'){
            nowP++;
        }
        else if(str[i] == 'A'){
            if(nowP > 0){
                passP += nowP;
                nowP = 0;
            }
            PA += passP;
        }
        else{
            cnt = (cnt + PA) % 1000000007;
        }
    }
    printf("%lld", cnt);
}

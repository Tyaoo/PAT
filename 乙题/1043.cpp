#include<bits/stdc++.h>
using namespace std;

int getIndex(char x){
    char chset[6] = {'P', 'A', 'T', 'e', 's', 't'};
    for(int i=0; i<strlen(chset); i++){
        if(x == chset[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    char str[10001];
    scanf("%s", str);
    int cnt[6] = {0};
    char chset[6] = {'P', 'A', 'T', 'e', 's', 't'};
    for(int i=0; i<strlen(str); i++){
        int index = getIndex(str[i]);
        if(index >= 0){
            cnt[index]++;
        }
    }
    while(1){
        int res = 0;
        for(int i=0; i<6; i++){
            if(cnt[i] > 0){
                printf("%c", chset[i]);
                cnt[i]--;
                res += cnt[i];
            }
        }
        if(res == 0)
            break;
    }
}

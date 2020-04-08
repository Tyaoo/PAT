#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int log[2] = {0};
    while(n--){
        int jhan, jhua, yhan, yhua;
        scanf("%d %d %d %d", &jhan, &jhua, &yhan, &yhua);
        int han = jhan + yhan;
        if(han == jhua && han != yhua)
            log[1]++;
        if(han == yhua && han != jhua)
            log[0]++;
    }
    printf("%d %d", log[0], log[1]);
}

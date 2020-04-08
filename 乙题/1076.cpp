#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            char tmp[4];
            scanf("%s", tmp);
            if(tmp[2] == 'T'){
                printf("%c", tmp[0] - 'A' + '1');
            }
        }
    }
    return 0;
}

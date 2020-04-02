#include<bits/stdc++.h>
using namespace std;

int main(){
    char x[80], y[80];
    scanf("%s %s", x, y);
    char out[80];
    int cnt = 0;
    for(int i=0; i<strlen(x); i++){
        int had = 0;
        char tmp = x[i];
        if(tmp>='a' && tmp<='z')
            tmp -= 32;
        for(int j=0; j<cnt; j++){
            if(out[j]==tmp){
                had = 1;
                break;
            }
        }
        if(!had){
            int index;
            for(index=0; index<strlen(y); index++){
                if(x[i]==y[index]) break;
            }
            if(index==strlen(y)){
                char tmp = x[i];
                if(tmp>='a' && tmp<='z')
                    tmp -= 32;
                printf("%c", tmp);
                out[cnt++] = tmp;
            }
        }
    }
    return 0;
}

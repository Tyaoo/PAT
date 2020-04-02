#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char ch;
    scanf("%d %c", &n, &ch);
    int cnt = 0;
    int level = 0;
    while(1){
        if(cnt == 0 && n > 0){
            cnt++;
            level++;
        }
        else{
            if(cnt+2*(2*level+1) <= n){
                cnt += 2*(2*level+1);
                level++;
            }
            else
                break;
        }
    }

    for(int i=0; i<(level*2-1); i++){
        for(int x=0; x<(i<level?i:2*(level-1)-i); x++)
            putchar(' ');
        for(int y=0; y<((2*level-1)-(2*(i<level?i:2*(level-1)-i))); y++)
            putchar(ch);
        putchar('\n');
    }
    printf("%d\n", n - cnt);
    return 0;
}

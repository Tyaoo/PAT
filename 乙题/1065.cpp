#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int cp = -1;
    int present = 0;
    int single = 0;
}Person;

int main(){
    int n;
    Person ps[100000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%05d %05d", &a, &b);
        ps[a].cp = b;
        ps[b].cp = a;
    }
    int m;
    int cnt = 0;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        int tmp;
        scanf("%05d", &tmp);
        ps[tmp].present = 1;
        if(ps[tmp].cp == -1){
            ps[tmp].single = 1;
            cnt++;
        }
        else{
            if(ps[ps[tmp].cp].present == 0){
                ps[tmp].single = 1;
                cnt++;
            }
            else{
                ps[tmp].single = 0;
                ps[ps[tmp].cp].single = 0;
                cnt--;
            }
        }
    }
    printf("%d\n", cnt);
    for(int i = 0; i < 100000; i++){
        if(ps[i].single == 1){
            printf("%05d", i);
            cnt--;
            if(cnt > 0)
                printf(" ");
            else
                break;
        }
    }
    return 0;
}

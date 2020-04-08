#include<bits/stdc++.h>
using namespace std;

int main(){
    int log[128] = {0};
    char a[1000001];
    char b[1000001];
    cin.getline(a, 1000001);
    cin.getline(b, 1000001);
    int len1 = strlen(a);
    int len2 = strlen(b);
    for(int i = 0; i < len1; i++){
        if(log[a[i]] == 0){
            printf("%c", a[i]);
            log[a[i]] = 1;
        }
    }
    for(int i = 0; i < len2; i++){
        if(log[b[i]] == 0){
            printf("%c", b[i]);
            log[b[i]] = 1;
        }
    }
    return 0;
}

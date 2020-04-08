#include<bits/stdc++.h>
using namespace std;

int main(){
    int num[11000] = {0};
    double n;
    scanf("%lf", &n);
    for(int i = 1; i <= n; i++){
        num[int(floor(i/2)+floor(i/3)+floor(i/5))] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < 11000; i++){
        if(num[i] == 1)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}

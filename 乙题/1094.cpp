#include<bits/stdc++.h>
using namespace std;

int check(long x){
    if(x < 2)
        return 0;
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int l, k;
    scanf("%d %d", &l, &k);
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i + k <= len; i++){
        long tmp = 0;
        char tmp1[k+1];
        memset(tmp1, '\0', (k+1)*sizeof(char));
        for(int j = 0; j < k; j++){
            tmp1[j] = str[i+j];
            tmp = tmp * 10 + (str[i+j]-'0');
        }
        if(check(tmp)){
            printf("%s", tmp1);
            return 0;
        }
    }
    printf("404");
    return 0;
}

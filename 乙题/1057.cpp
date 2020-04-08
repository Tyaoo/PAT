#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100001];
    int sum = 0;
    scanf("%[^\n]", str);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            sum += str[i] - 'a' + 1;
        }
        if(str[i] >= 'A' && str[i] <= 'Z'){
            sum += str[i] - 'A' + 1;
        }
    }
    char bin[33];
    int cnt0 = 0, cnt1 = 0;
    while(sum > 0){
        int tmp = sum % 2;
        if(tmp == 0)
            cnt0++;
        else
            cnt1++;
        sum /= 2;
    }
    printf("%d %d", cnt0, cnt1);
    return 0;
}

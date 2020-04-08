#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100000];
    int n;
    scanf("%s %d", str, &n);
    for(int i = 1 ; i < n; i++){
        int len = strlen(str);
        char tmp[100000];
        memset(tmp, '\0', 100000 * sizeof(char));
        int index = 0;
        for(int j = 0; j < len; j++){
            int cnt = 1;
            while(str[j] == str[j+1]){
                cnt++;
                j++;
            }
            tmp[index++] = str[j];
            char strCnt[100];
            sprintf(strCnt, "%d", cnt);
            for(int k = 0; k < strlen(strCnt); k++)
                tmp[index++] = strCnt[k];
        }
        strcpy(str, tmp);
    }
    printf("%s", str);
    return 0;
}

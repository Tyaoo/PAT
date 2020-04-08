#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, s;
    scanf("%d %d %d", &m, &n, &s);
    if(m < s){
        printf("Keep going...");
    }
    else{
        char names[m][21];
        int flag[m];

        for(int i = 0; i < m; i++){
            char name[21];
            scanf("%s", names[i]);

            if((i + 1 == s) || (i + 1 > s && (i + 1 - s) % n == 0)){
                int single = 1;
                for(int j = 0; j < i; j++){
                    if(flag[j] == 1 && strcmp(names[i],names[j]) == 0){
                        single = 0;
                        break;
                    }
                }
                if(single == 1){
                    printf("%s\n", names[i]);
                    flag[i] = 1;
                }
                else{
                    s++;
                }
            }
        }
    }
    return 0;
}

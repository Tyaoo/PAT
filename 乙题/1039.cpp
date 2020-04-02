#include<bits/stdc++.h>
using namespace std;

int main(){
    int need[128] = {0};
    int had[128] = {0};
    char zhu1[1001], zhu2[1001];
    scanf("%s", zhu1);
    getchar();
    scanf("%s", zhu2);
    int len1 = strlen(zhu1);
    int len2 = strlen(zhu2);

    for(int i=0; i<len1; i++){
        had[zhu1[i]]++;
    }
    for(int i=0; i<len2; i++){
        need[zhu2[i]]++;
    }

    int more = 0, less = 0;
    for(int i=0; i<128; i++){
        if(need[i] > 0){
            int tmp = had[i] - need[i];
            // printf("%c %d %d\n", i, had[i], need[i]);
            if(tmp >= 0)
                more += tmp;
            else
                less -= tmp;
        }
        else if(had[i] > 0){
            more += had[i];
        }
    }

    if(less > 0){
        printf("No %d", less);
    }
    else{
        printf("Yes %d", more);
    }
}

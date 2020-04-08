#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int maxScore;
    int choiceNum;
    int rightNum;
    int errorCnt[5] = {0};
    int keys[5] = {0};
}Title;

int main(){
    int N, M;
    int maxCnt = 0;
    scanf("%d %d", &N, &M);
    Title ts[M];
    for(int i = 0; i < M; i++){
        scanf("%d %d %d", &ts[i].maxScore, &ts[i].choiceNum, &ts[i].rightNum);
        char tmp[20];
        scanf("%[^\n]", tmp);
        for(int j = 0; j < strlen(tmp); j++){
            if(tmp[j] >= 'a' && tmp[j] <= 'e')
                ts[i].keys[tmp[j]-'a'] = 1;
        }
    }

    getchar();
    for(int i = 0; i < N; i++){
        char ch;
        int index = 0;
        double score = 0;
        while((ch = getchar()) != '\n'){
            if(ch == '('){
                char key[15];
                scanf("%[^)]", key);
                int all[5] = {0};
                int error = 0;
                int rightCnt = 0;
                int len = key[0] - '0';
                for(int k = 1; k <= len; k++){
                    all[key[k*2]-'a'] = 1;
                }
                for(int k = 0; k < 5; k++){
                    if(ts[index].keys[k] == 1 && all[k] == 1)
                        rightCnt++;
                    else if(ts[index].keys[k] == 1 && all[k] == 0){
                        ts[index].errorCnt[k]++;
                    }
                    else if(ts[index].keys[k] == 0 && all[k] == 1){
                        error = 1;
                        ts[index].errorCnt[k]++;
                    }
                    if(ts[index].errorCnt[k] > maxCnt){
                        maxCnt = ts[index].errorCnt[k];
                    }
                }
                if(error == 0){
                    if(rightCnt != ts[index].rightNum){
                        score += ts[index].maxScore * 1.0 / 2;
                    }
                    else{
                        score += ts[index].maxScore * 1.0;
                    }
                }
                index++;
            }
        }
        printf("%.1f\n", score);
    }


    if(maxCnt == 0){
        printf("Too simple");
    }
    else{
        for(int i = 0; i < M; i++){
            for(int j = 0; j < 5; j++){
                if(ts[i].errorCnt[j] == maxCnt)
                    printf("%d %d-%c\n", maxCnt, i + 1, j + 'a');
            }
        }
    }
    return 0;
}

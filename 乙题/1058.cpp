#include<bits/stdc++.h>
using namespace std;

typedef struct Errors{
    int index;
    int cnt = 0;
}Error;

int cmp(Error x, Error y){
    if(x.cnt == y.cnt){
        return x.index < y.index;
    }
    else{
        return x.cnt > y.cnt;
    }
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int scores[M];
    int choiceNum[M];
    int rightNum[M];
    char keys[M][6];
    Error errors[M];
    int stuScores[N];

    for(int i = 0; i < N; i++)
        stuScores[i] = 0;

    for(int i = 0; i < M; i++){
        scanf("%d %d %d", &scores[i], &choiceNum[i], &rightNum[i]);
        errors[i].index = i;
        for(int j = 0; j < rightNum[i]; j++){
            getchar();
            scanf("%c", &keys[i][j]);
        }
    }
    getchar();
    for(int i = 0; i < N; i++){
        int index = 0;;
        char ch;
        char item[20];
        while((ch = getchar()) != '\n'){
            if(ch == '('){
                scanf("%[^)]", item);
                int itemNum = item[0] - '0';
                int right = 1;
                if(rightNum[index] == itemNum){
                    for(int j = 0; j < itemNum; j++){
                        if(keys[index][j] != item[2 * (j + 1)]){
                            right = 0;
                            errors[index].cnt++;
                            break;
                        }
                    }
                }
                else{
                    right = 0;
                    errors[index].cnt++;
                }
                if(right == 1){
                    stuScores[i] += scores[index];
                }
                index++;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d\n", stuScores[i]);
    }

    sort(errors, errors+M, cmp);

    int errorMax = errors[0].cnt;
    if(errorMax == 0){
        printf("Too simple");
    }
    else{
        printf("%d", errorMax);
        for(int i = 0; i < M; i++){
            if(errors[i].cnt == errorMax)
                printf(" %d", errors[i].index + 1);
            else
                break;
        }
    }
    return 0;
}

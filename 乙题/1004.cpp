#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char maxname[11];
    char maxnum[11];
    int maxscore = -1;
    char minname[11];
    char minnum[11];
    int minscore = 101;
    while(n--){
        char name[11];
        char num[11];
        int score;
        scanf("%s%s%d", name, num, &score);
        if(score>maxscore){
            maxscore = score;
            strcpy(maxname, name);
            strcpy(maxnum, num);
        }
        if(score<minscore){
            minscore = score;
            strcpy(minname, name);
            strcpy(minnum, num);
        }
    }
    printf("%s %s\n%s %s\n",maxname,maxnum,minname,minnum);
}


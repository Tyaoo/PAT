#include<bits/stdc++.h>
using namespace std;

typedef struct{
    char id[14];
    int score;
    int place;
    int date;
}Stu;

typedef struct{
    int id = 0;
    int cnt = 0;
}Place;

int cmpById(const void *a, const void *b){
    Stu x = *(Stu *)a;
    Stu y = *(Stu *)b;
    if(x.score == y.score){
        return strcmp(x.id, y.id);
    }
    else{
        return y.score - x.score;
    }
}

int cmpByCnt(const void *a, const void *b){
    Place x = *(Place *)a;
    Place y = *(Place *)b;
    if(x.cnt == y.cnt){
        return x.id - y.id;
    }
    else{
        return y.cnt - x.cnt;
    }
}

void dc1(Stu s[], int n, char x){
    int cnt = 0;
    int head = 1;
    for(int i = 0; i < n; i++){
        if(s[i].id[0] == x){
            if(head == 1){
                head = 0;
            }
            else{
                printf("\n");
            }
            cnt++;
            printf("%s %d", s[i].id, s[i].score);
        }
    }
    if(cnt == 0){
        printf("NA");
    }
}

void dc2(Stu s[], int n, int x){
    int cnt = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(x == s[i].place){
            cnt++;
            sum += s[i].score;
        }
    }
    if(cnt > 0)
        printf("%d %d", cnt, sum);
    else
        printf("NA");
}

void dc3(Stu s[], int n, int x){
    Place ps[n];
    int index = 0;
    int cnt[1000] = {0};
    for(int i = 0; i < n; i++){
        if(s[i].date == x){
            cnt[s[i].place]++;
        }
    }
    for(int i = 0; i < 1000; i++){
        if(cnt[i] > 0){
            ps[index].id = i;
            ps[index++].cnt = cnt[i];
        }
    }
    qsort(ps, index, sizeof(Place), cmpByCnt);
    for(int i = 0; i < index; i++){
        printf("%d %d", ps[i].id, ps[i].cnt);
        if(i < index - 1) printf("\n");
    }
    if(index == 0)
        printf("NA");
}


int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    Stu ss[n];
    for(int i = 0; i < n; i++){
        scanf("%s %d", ss[i].id, &ss[i].score);
        int place = 0;
        for(int j = 1; j < 4; j++){
            place = place * 10 + (ss[i].id[j]-'0');
        }
        ss[i].place = place;
        int date = 0;
        for(int j = 4; j < 10; j++){
            date = date * 10 + (ss[i].id[j]-'0');
        }
        ss[i].date = date;
    }
    qsort(ss, n, sizeof(Stu), cmpById);
    for(int i = 1; i <= m; i++){
        int cho;
        scanf("%d", &cho);
        getchar();
        if(cho == 1){
            char tmp;
            scanf("%c", &tmp);
            printf("Case %d: %d %c\n", i, cho, tmp);
            dc1(ss, n, tmp);
        }
        else if(cho == 2){
            int tmp;
            scanf("%d", &tmp);
            printf("Case %d: %d %d\n", i, cho, tmp);
            dc2(ss, n, tmp);
        }
        else{
            int tmp;
            scanf("%d", &tmp);
            printf("Case %d: %d %06d\n", i, cho, tmp);
            dc3(ss, n, tmp);
        }
        if(i < m) printf("\n");
    }
    return 0;
}

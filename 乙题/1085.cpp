#include<bits/stdc++.h>
using namespace std;

typedef struct{
    char school[7];
    char grade;
    int score;
}Person;


typedef struct{
    char name[7];
    double sum = 0;
    int num = 0;
}School;

int cmpBySchool (Person x, Person y){
    return strcmp(x.school, y.school)>0? 0: 1;
}

int cmpBySum(School x, School y){
    if(x.sum == y.sum)
        if(x.num == y.num)
            return strcmp(x.name, y.name)>0? 0: 1;
        else
            return x.num < y.num;
    else
        return x.sum > y.sum;
}

int main(){
    int n;
    scanf("%d", &n);
    Person ps[n];
    School ss[n];

    for(int i = 0 ; i < n; i++){
        char id[7];
        int score;
        char school[7];
        scanf("%s %d %s", id, &score, school);
        for(int j = 0; j < strlen(school); j++){
            school[j] = tolower(school[j]);
        }
        ps[i].grade = id[0];
        strcpy(ps[i].school, school);
        ps[i].score = score;
    }

    sort(ps, ps+n, cmpBySchool);

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i-1 >= 0 && strcmp(ps[i].school,ps[i-1].school) != 0){
            ss[cnt].sum = floor(ss[cnt].sum);
            cnt++;
        }
        strcpy(ss[cnt].name, ps[i].school);
        ss[cnt].num++;
        if(ps[i].grade == 'B'){
            ss[cnt].sum += ps[i].score / 1.5;
        }
        else if(ps[i].grade == 'A'){
            ss[cnt].sum += ps[i].score * 1.0;
        }
        else{
            ss[cnt].sum += ps[i].score * 1.5;
        }
    }

    ss[cnt].sum = floor(ss[cnt].sum);
    cnt++;
    sort(ss, ss+cnt, cmpBySum);

    printf("%d\n", cnt);
    int rank = 1;
    for(int i = 0; i < cnt; i++){
        if(i-1 >= 0 && ss[i-1].sum != ss[i].sum){
            rank = i + 1;
        }
        printf("%d %s %d %d\n", rank, ss[i].name, (int)ss[i].sum, ss[i].num);
    }
    return 0;
}

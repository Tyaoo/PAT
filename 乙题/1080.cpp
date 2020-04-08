#include<bits/stdc++.h>
using namespace std;

typedef struct Students{
    char name[21];
    int gp = -1;
    int gm = -1;
    int gf = -1;
    int sum = 0;
}Student;

int getIndex(Student a[], int n, char name[]){
    int res;
    int l = 0;
    int r = n;
    while(l < r){
        res = (l + r) / 2;
        if(strcmp(a[res].name, name) < 0){
            l = res + 1;
        }
        else if(strcmp(a[res].name, name) > 0){
            r = res;
        }
        else{
            return res;
        }
    }
    if(strcmp(a[l].name, name) != 0){
        return n;
    }
    else{
        return l;
    }
}

int cmpBySum(Student x, Student y){
    if(x.sum == y.sum){
        return strcmp(x.name, y.name)>0? 0: 1;
    }
    else{
        return x.sum > y.sum;
    }
}

int cmpByName(Student x, Student y){
    return strcmp(x.name, y.name)>0? 0: 1;
}



int main(){
    int p, m, n;
    scanf("%d %d %d", &p, &m, &n);
    int N = max(max(p, m),n);
    Student ss[N];
    int cnt = p;

    for(int i = 0; i < p; i++){
        scanf("%s %d", ss[i].name, &ss[i].gp);
    }

    sort(ss, ss + p, cmpByName);
    for(int i = 0; i < m; i++){
        char name[21];
        int gm;
        scanf("%s %d", name, &gm);
        int index = getIndex(ss, cnt, name);
        cnt = index>=cnt? index: cnt;
        strcpy(ss[index].name, name);
        ss[index].gm = gm;
    }

    for(int i = 0; i < n; i++){
        char name[21];
        int gf;
        scanf("%s %d", name, &gf);
        int index = getIndex(ss, cnt, name);
        cnt = index>=cnt? index: cnt;
        strcpy(ss[index].name, name);
        ss[index].gf = gf;
    }

    for(int i = 0; i < cnt; i++){
        if(ss[i].gm > ss[i].gf)
            ss[i].sum = round(ss[i].gm * 0.4 + ss[i].gf * 0.6);
        else
            ss[i].sum = ss[i].gf;
    }

    sort(ss, ss + cnt, cmpBySum);
    for(int i = 0; i < cnt; i++){
        if(ss[i].gp >= 200 && ss[i].sum >= 60)
            printf("%s %d %d %d %d\n", ss[i].name, ss[i].gp, ss[i].gm, ss[i].gf, ss[i].sum);
    }
}

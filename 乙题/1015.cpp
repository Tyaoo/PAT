#include<bits/stdc++.h>
using namespace std;

struct Student{
    char num[9];
    int de;
    int cai;
};

int cmp(const Student &A, const Student &B){
    if((A.de+A.cai)==(B.de+B.cai)){
        if(A.de==B.de) {
            return strcmp(A.num, B.num)<0;
        }
        else {
            return B.de<A.de;
        }
    }
    else {
        return (B.de+B.cai)<(A.de+A.cai);
    }
}

int main(){
    int n,low,high;
    scanf("%d%d%d", &n, &low, &high);
    Student student1[n];
    Student student2[n];
    Student student3[n];
    Student student4[n];
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    while(n--){
        char num[9];
        int de, cai;
        scanf("%s%d%d", num, &de, &cai);
        Student tmp;
        strcpy(tmp.num, num);
        tmp.de = de;
        tmp.cai = cai;
        if(de<low || cai<low){
            continue;
        }
        else if(de>=high && cai>=high){
            student1[cnt1++] = tmp;
        }
        else if(de>=high && cai<high){
            student2[cnt2++] = tmp;
        }
        else if(de<high && cai<high && de>=cai){
            student3[cnt3++] = tmp;
        }
        else{
            student4[cnt4++] = tmp;
        }
    }

    sort(student1, student1+cnt1, cmp);
    sort(student2, student2+cnt2, cmp);
    sort(student3, student3+cnt3, cmp);
    sort(student4, student4+cnt4, cmp);

    printf("%d\n", cnt1+cnt2+cnt3+cnt4);
    for(int i=0; i<cnt1; i++){
        printf("%s %d %d\n", student1[i].num, student1[i].de, student1[i].cai);
    }
    for(int i=0; i<cnt2; i++){
        printf("%s %d %d\n", student2[i].num, student2[i].de, student2[i].cai);
    }
    for(int i=0; i<cnt3; i++){
        printf("%s %d %d\n", student3[i].num, student3[i].de, student3[i].cai);
    }
    for(int i=0; i<cnt4; i++){
        printf("%s %d %d\n", student4[i].num, student4[i].de, student4[i].cai);
    }

    return 0;
}



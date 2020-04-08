#include<bits/stdc++.h>
using namespace std;

typedef struct Students{
    char nums[17];
    int machine;
    int exam;
}Student;

int cmp(Student x, Student y){
    return x.machine < y.machine;
}

int main(){
    int n1;
    scanf("%d", &n1);
    Student s[n1];
    for(int i=0; i<n1; i++){
        scanf("%s %d %d", s[i].nums, &s[i].machine, &s[i].exam);
    }
    int n2;
    scanf("%d", &n2);
    int check[n2];
    for(int i=0; i<n2; i++){
        scanf("%d", &check[i]);
    }
    sort(s, s+n1, cmp);
    for(int i=0; i<n2; i++){
        printf("%s %d", s[check[i]-1].nums, s[check[i]-1].exam);
        if(i < n2-1) printf("\n");
    }
}

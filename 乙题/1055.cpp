#include<bits/stdc++.h>
using namespace std;

struct Person{
    char name[10];
    int height;
};

int cmp(Person x, Person y){
    if(x.height == y.height){
        return strcmp(x.name, y.name)>0? 0: 1;
    }
    else{
        return x.height > y.height;
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    Person p[n];
    for(int i = 0; i < n; i++){
        scanf("%s %d", p[i].name, &p[i].height);
    }

    sort(p, p + n, cmp);
    int pivot = 0;
    for(int i = 0; i < k; i++){
        int knums;
        if(i == 0){
            knums = n / k + n % k;
        }
        else{
            knums = n / k;
        }

        // left
        for(int j = 0; j < knums / 2; j++){
            printf("%s ", p[pivot+(knums/2-j)*2-1].name);
        }

        // middle
        printf("%s", p[pivot].name);
        if(knums != 1){
            printf(" ");
        }

        // right
        for(int j = knums / 2 + 1; j < knums; j++){
            printf("%s", p[pivot+(j-knums/2)*2].name);
            if(j < knums - 1) printf(" ");
        }
        if(i < k - 1) printf("\n");
        pivot += knums;
    }
}

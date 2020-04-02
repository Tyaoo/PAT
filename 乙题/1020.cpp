#include<bits/stdc++.h>
using namespace std;

struct Food{
    double num;
    double sum;
    double pri;
};

int cmp(Food x, Food y){
    return x.pri > y.pri;
}

int main(){
    int n;
    double goal;
    scanf("%d %lf", &n, &goal);
    Food foods[n];
    for(int i=0; i<n; i++){
        Food food;
        scanf("%lf", &food.num);
        foods[i] = food;
    }
    for(int i=0; i<n; i++){
        scanf("%lf", &foods[i].sum);
        foods[i].pri = foods[i].sum/foods[i].num;
    }
    sort(foods, foods+n, cmp);
    int index = 0;
    double res = 0;
    while(goal>0 && index<n){
        if(goal-foods[index].num >= 0){
            res += foods[index].sum;
            goal -= foods[index].num;
        }
        else{
            res += goal*foods[index].pri;
            goal = 0;
        }
        index++;
    }
    printf("%.2lf", res);
}



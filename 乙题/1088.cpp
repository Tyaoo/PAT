#include<bits/stdc++.h>
using namespace std;

char* getRes(int x, double y){
    if(y > x)
        return "Cong";
    else if(y < x)
        return "Gai";
    else
        return "Ping";
}

int main(){
    int m, x, y;
    scanf("%d %d %d", &m, &x, &y);
    int A = -1, B = -1;
    double C = -1;
    int cnt = 0;

    for(int i = 10; i <= 99; i++){
        int a = i;
        int b = (a % 10) * 10 + (a / 10);
        double c1 = abs(a - b) * 1.0 / x;
        double c2 = b * 1.0 / y;
        if(c1 == c2){
            A = a;
            B = b;
            C = c1;
            cnt++;
        }
    }

    if(cnt > 0){
        printf("%d %s %s %s", A, getRes(m, A), getRes(m ,B), getRes(m, C));
    }
    else{
        printf("No Solution");
    }
    return 0;
}

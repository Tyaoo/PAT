#include<bits/stdc++.h>
using namespace std;

int main(){
    double r1, p1, r2, p2;
    scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
    double a1 = r1 * cos(p1);
    double b1 = r1 * sin(p1);
    double a2 = r2 * cos(p2);
    double b2 = r2 * sin(p2);

    double a3 = a1 * a2 - b1 * b2;
    double b3 = a1 * b2 + a2 * b1;

    if(fabs(a3) < 0.01){
        a3 = 0;
    }
    if(fabs(b3) < 0.01){
        b3 = 0;
    }
    if(b3 >= 0){
        printf("%.2lf+%.2lfi", a3, b3);
    }
    else{
        printf("%.2lf%.2lfi", a3, b3);
    }
    return 0;
}

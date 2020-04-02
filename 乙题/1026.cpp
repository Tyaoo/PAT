#include<bits/stdc++.h>
using namespace std;

int main(){
    double C1, C2;
    scanf("%lf %lf", &C1, &C2);
    int h, m, s;
    int C = (C2 - C1) / 100 + 0.5;
    h = C / 3600;
    m = C % 3600 / 60;
    s = C % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double maxr = 0.0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        double res = sqrt(a*a + b*b);
        maxr = res>maxr? res: maxr;
    }
    printf("%.2lf", maxr);
}

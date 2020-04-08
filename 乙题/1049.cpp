#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    double res = 0;
    for(int i=0; i<n; i++){
        double tmp;
        scanf("%lf", &tmp);
        res += tmp * (i+1) * (n-i);
    }
    printf("%.2lf", res);
    return 0;
}

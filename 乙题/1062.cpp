#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int res = a % b;
    while(res > 0){
        a = b;
        b = res;
        res = a % b;
    }
    return b;
}

int main(){
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);

    double l = n1 * 1.0 / m1;
    double r = n2 * 1.0 / m2;
    if(n1 > n2){
        double tmp = l;
        l = r;
        r = tmp;
    }

    double res = floor(l);
    int head = 0;
    while(res / k < r){
        if(gcd(int(res), k) == 1 && res / k > l && res / k < r){
            if(head == 0){
                head = 1;
            }
            else{
                printf(" ");
            }
            printf("%.0f/%d", res, k);
        }
        res++;
    }
}

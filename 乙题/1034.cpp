#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b);
void show(long a, long b);

long gcd(long a, long b){
    long r = a % b;
    while(r != 0){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

void show(long a, long b){
    if(b == 0){
        printf("Inf");
        return;
    }
    int sign = 1;
    if(a < 0){
        a = -a;
        sign *= -1;
    }
    if(b < 0){
        b = -b;
        sign *= -1;
    }
    long g = gcd(a, b);
    a /= g;
    b /= g;
    long zheng = a / b;
    long fenzi = a % b;
    long fenmu = b;
    if(sign == -1)
        printf("(-");
    if(zheng > 0){
        if(fenzi > 0){
            if(fenmu == 1){
                printf("%ld %ld", zheng, fenzi);
            } else{
                printf("%ld %ld/%ld", zheng, fenzi, fenmu);
            }
        } else{
            printf("%ld", zheng);
        }
    }
    else {
        if(fenzi > 0){
            if(fenmu == 1){
                printf("%%ld", fenzi);
            } else{
                printf("%ld/%ld", fenzi, fenmu);
            }
        } else{
            printf("0");
        }
    }
    if(sign == -1)
        printf(")");
}

int main(){
    long z1, m1, z2, m2;
    scanf("%ld/%ld %ld/%ld", &z1, &m1, &z2, &m2);

    // +
    show(z1, m1);
    printf(" + ");
    show(z2, m2);
    printf(" = ");
    show(z1*m2 + z2*m1, m1*m2);
    printf("\n");

    // -
    show(z1, m1);
    printf(" - ");
    show(z2, m2);
    printf(" = ");
    show(z1*m2 - z2*m1, m1*m2);
    printf("\n");

    // *
    show(z1, m1);
    printf(" * ");
    show(z2, m2);
    printf(" = ");
    show(z1*z2, m1*m2);
    printf("\n");

    // /
    show(z1, m1);
    printf(" / ");
    show(z2, m2);
    printf(" = ");
    show(z1*m2, z2*m1);
    printf("\n");

    return 0;
}

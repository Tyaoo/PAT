#include<bits/stdc++.h>
using namespace std;

int main(){
    long g1, s1, k1, g2, s2, k2, g3, s3, k3;
    scanf("%ld.%ld.%ld %ld.%ld.%ld", &g1, &s1, &k1, &g2, &s2, &k2);

    int rev = 0;
    if(g2 < g1){
        rev = 1;
    }
    else if(g2 == g1){
        if(s2 < s1){
            rev = 1;
        }
        else if(s2 == s1){
            if(k2 < k1){
                rev = 1;
            }
        }
    }

    if(rev == 1){
        swap(g1, g2);
        swap(s1, s2);
        swap(k1, k2);
    }

    k3 = k2 - k1;
    if(k3 < 0){
        s2--;
        k3 += 29;
    }
    s3 = s2 - s1;
    if(s3 < 0){
        g2--;
        s3 += 17;
    }
    g3 = g2 - g1;
    if(rev == 1)
        printf("-");
    printf("%ld.%ld.%ld", g3, s3, k3);
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int cord[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &cord[i]);

    sort(cord, cord + n);
    double len = cord[0] * 1.0;
    for(int i = 1; i < n; i++){
        len = (len + cord[i]) / 2;
    }

    printf("%.f", floor(len));
}

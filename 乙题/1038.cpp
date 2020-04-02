#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    scanf("%d", &n1);
    int scores[n1];
    for(int i=0; i<n1; i++){
        scanf("%d", &scores[i]);
    }
    int check[101] = {0};
    int n2;
    scanf("%d", &n2);
    int checks[n2];
    for(int i=0; i<n2; i++){
        int score;
        scanf("%d", &score);
        check[score] = 1;
        checks[i] = score;
    }
    for(int i=0; i<n1; i++){
        if(check[scores[i]] >= 1)
            check[scores[i]]++;
    }
    for(int i=0; i<n2; i++){
        printf("%d", check[checks[i]]-1);
        if(i < n2-1) printf(" ");
    }
}

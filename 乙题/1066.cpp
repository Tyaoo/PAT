#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, a, b, gray;
    scanf("%d %d %d %d %d", &m, &n, &a, &b, &gray);
    int matrix[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int tmp;
            scanf("%d", &tmp);
            if(tmp >= a && tmp <= b){
                tmp = gray;
            }
            matrix[i][j] = tmp;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%03d", matrix[i][j]);
            if(j < n - 1) printf(" ");
        }
        if(i < m - 1) printf("\n");
    }
}

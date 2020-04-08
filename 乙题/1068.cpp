#include<bits/stdc++.h>
using namespace std;


int main(){
    int m, n, tol;
    scanf("%d %d %d", &m, &n, &tol);
    int matrix[n][m];
    /*
    using static avoids from overflow
    or you can use malloc create array
    example:
        int *num;
        num = (int *)malloc(16777216 * sizeof(int));
        ...
        free(num);
    */
    static int num[16777216];
    int cnt = 0;
    int maxX = 0, maxY = 0;
    for(int i = 0; i < n; i++){
        for(int  j = 0; j < m; j++){
            int tmp;
            scanf("%d", &tmp);
            matrix[i][j] = tmp;
            num[tmp]++;
        }
    }

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for(int i = 0; i < n; i++){
        for(int  j = 0; j < m; j++){
            if(num[matrix[i][j]] != 1)
                continue;
            int flag = 1;
            for(int k = 0; k < 8; k++){
                int ni = i + dx[k];
                int nj = j + dy[k];
                if(ni >=0 && ni < n && nj >=0 && nj < m && abs(matrix[i][j]-matrix[ni][nj]) <= tol){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                cnt++;
                maxX = i;
                maxY = j;
            }
        }
    }
    if(cnt > 1){
        printf("Not Unique\n");
    }
    else if(cnt == 1){
        printf("(%d, %d): %d", maxY + 1, maxX + 1, matrix[maxX][maxY]);
    }
    else{
        printf("Not Exist");
    }
    return 0;
}

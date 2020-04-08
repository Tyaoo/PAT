#include<bits/stdc++.h>
using namespace std;

int cmp(int x, int y){
    return x > y;
}

int main(){
    int n;
    scanf("%d", &n);
    int row, col;
    for(row=sqrt(n); row<=n; row++){
        col = n / row;
        if(row*col == n && row >= col){
            break;
        }
    }
    int matrix[row][col];
    int visit[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            matrix[i][j] = 0;
            visit[i][j] = 1;
        }
    }
    int nums[n];
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    sort(nums, nums+n, cmp);

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int index = 0;
    int dir = 0;
    int x = 0;
    int y = -1;

    int times = 0;
    while(index < n){
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(nx>=0 && nx<row && ny>=0 && ny<col && visit[nx][ny]==1){
            matrix[nx][ny] = nums[index++];
            visit[nx][ny] = 0;
            x = nx;
            y = ny;
        }
        else{
            dir = (dir + 1) % 4;
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d", matrix[i][j]);
            if(j < col-1) printf(" ");
        }
        if(i < row-1) printf("\n");
    }
}

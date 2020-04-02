#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    char ch;
    scanf("%f %c", &n, &ch);
    int row = n;
    int col = round(n / 2);

    for(int i=0; i<col; i++){
        if(i == 0 || i == col-1){
            for(int j=0; j<row; j++)
                printf("%c", ch);
            printf("\n");
        }
        else{
            for(int j=0; j<row; j++)
                printf("%c", (j == 0 || j == row-1)?ch:' ');
            printf("\n");
        }
    }
}

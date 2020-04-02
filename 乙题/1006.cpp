#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    char str[100];
    int index = 0;
    int cnt = 0;
    while(n){
        int x = n%10;
        for(int i=x; i>0; i--){
            if(cnt == 0){
                str[index] = i + '0';
                index++;
            }
            else if(cnt  == 1){
                str[index] = 'S';
                index++;
            }
            else if(cnt == 2){
                str[index] = 'B';
                index ++;
            }
        }
        cnt++;
        n/=10;
    }
    for(int i=index-1; i>=0; i--){
        printf("%c", str[i]);
    }

}


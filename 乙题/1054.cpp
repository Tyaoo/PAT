#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt = 0;
    scanf("%d", &n);
    double tmp, sum = 0.0;
    char a[50], b[50];
    for(int i = 0; i < n; i++){
        scanf("%s", a);
        sscanf(a, "%lf", &tmp);
        sprintf(b, "%.2f", tmp);
        int flag = 0;
        for(int j = 0; j < strlen(a); j++)
            if(a[j] != b[j]) flag = 1;
        if(flag || tmp < -1000 || tmp > 1000){
            printf("ERROR: %s is not a legal number\n", a);
        }
        else{
            sum += tmp;
            cnt++;
        }
    }
    if(cnt == 1)
        printf("The average of 1 number is %.2f", sum);
    else if(cnt > 1)
        printf("The average of %d numbers is %.2f", cnt, sum / cnt);
    else
        printf("The average of 0 numbers is Undefined");
    return 0;
}

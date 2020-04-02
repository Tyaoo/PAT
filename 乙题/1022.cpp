#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    scanf("%d %d %d", &a, &b, &d);
    c = a + b;
    char res[100];
    int index = 0;
    do{
        res[index++] = (c%d)+'0';
        c /= d;
    }while(c>0);
    for(int i=index-1; i>=0; i--){
        printf("%c", res[i]);
    }
}



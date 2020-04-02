#include<bits/stdc++.h>
using namespace std;

int main(){
    int num[10];
    for(int i=0; i<10; i++)
        scanf("%d", &num[i]);
    char str[50];
    int index = 0;
    for(int i=0; i<10; i++){
        for(int j=0; j<num[i]; j++)
            str[index++] = i + '0';
    }
    sort(str, str+index);
    if(str[0]=='0'){
        for(int i=1; i<index; i++){
            if(str[i]!='0'){
                str[0] = str[i];
                str[i] = '0';
                break;
            }
        }
    }
    for(int i=0; i<index; i++)
        printf("%c", str[i]);
}



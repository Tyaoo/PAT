#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin.getline(str,100);
    for(int i=strlen(str); i>=0; i--){
        if(str[i]==' '){
            printf("%s ", &str[i+1]);
            str[i] = '\0';
        }
    }
    printf("%s", &str[0]);
    return 0;
}


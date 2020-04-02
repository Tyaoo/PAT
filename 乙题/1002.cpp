#include<stdio.h>
#include<string.h>

int main(){
    char c;
    int sum = 0;
    char res[10];
    char pinyin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    while((c=getchar())!='\n'){
        sum += c - '0';
    }
    sprintf(res,"%d",sum);
    for(unsigned int i=0; i<strlen(res); i++){
        printf("%s", pinyin[res[i]-'0']);
        if(i<strlen(res)-1){
            printf(" ");
        }
    }
}

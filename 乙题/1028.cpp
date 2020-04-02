#include<bits/stdc++.h>
using namespace std;

int s2i(char *x){
    int res = 0;
    for(int i=0; i<strlen(x); i++)
        res = res*10 + (x[i]-'0');
    return res;
}

int check(char *date){
    char *endDate = "2014/09/06";
    char *begDate = "1814/09/06";
    if(strcmp(date,begDate)>=0 && strcmp(date,endDate)<=0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    char old[11];
    char you[11];
    char maxDate[11];
    char minDate[11];
    memset(maxDate, '\0', sizeof(char)*11);
    memset(minDate, '\0', sizeof(char)*11);
    int cnt = 0;
    for(int i=0; i<n; i++){
        char name[11];
        char date[11];
        scanf("%s %s", name, date);

        if(check(date)){
            cnt++;
            if(strlen(maxDate)==0 || strcmp(date, maxDate)>0){
                strcpy(maxDate, date);
                strcpy(you, name);
            }
            if(strlen(minDate)==0 || strcmp(date, minDate)<0){
                strcpy(minDate, date);
                strcpy(old, name);
            }
        }
    }
    if(cnt==0)
        printf("0");
    else
        printf("%d %s %s", cnt, old, you);
    return 0;
}

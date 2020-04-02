#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[4][60];
    char days[7][5] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    for(int i=0; i<4; i++)
        scanf("%s", str[i]);
    int len1,len2;
    int day = -1;
    int hour = -1;
    int mins = -1;
    len1 = strlen(str[0])>strlen(str[1])?strlen(str[1]):strlen(str[0]);
    len2 = strlen(str[2])>strlen(str[3])?strlen(str[3]):strlen(str[2]);
    for(int i=0; i<len1; i++){
        if(str[0][i]==str[1][i]){
            if(day == -1){
                if(str[0][i]>='A' && str[0][i]<='G'){
                    day = str[0][i] - 'A';
                }
            }
            else{
                if(str[0][i]>='A'&&str[0][i]<='N'){
                    hour = str[0][i] - 'A' + 10;
                    break;
                }
                if(str[0][i]>='0'&&str[0][i]<='9'){
                    hour = str[0][i] - '0';
                    break;
                }
            }
        }
    }
    for(int i=0; i<len2; i++){
        if(str[2][i]==str[3][i] && str[2][i]>='A' && str[2][i]<='z'){
            if(mins == -1){
                mins = i;
                break;
            }
        }
    }
    printf("%s %02d:%02d", days[day], hour, mins);
}



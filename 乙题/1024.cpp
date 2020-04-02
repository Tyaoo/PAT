#include<bits/stdc++.h>
using namespace std;

int main(){
    char in[100001];
    char out[100001];
    scanf("%s", in);
    int index = 0;
    int dot = 0;
    int sign1 = 1;
    int sign2 = 1;
    int mov = 0;
    for(int i=0; i<strlen(in); i++){
        if(in[i]=='+')
            continue;
        else if(in[i]=='-'){
            sign1 = -1;
        }
        else if(in[i]=='.'){
            dot = i;
        }
        else if(in[i]=='E'){
            if(in[i+1]=='-')
                sign2 = -1;
            for(int j=i+2; j<strlen(in); j++){
                mov = mov*10 + (in[j]-'0');
            }
            break;
        }
        else{
            out[index++] = in[i];
        }
    }

    dot = 1 + sign2*mov;

    if(sign1==-1)
            printf("-");
    if(dot<1){
        printf("0.");
        for(int i=dot; i<0; i++){
            printf("0");
        }
        for(int i=0; i<index; i++)
            printf("%c", out[i]);
    }
    else{
        if(dot<index){
            for(int i=0; i<index;){
                if(i==dot)
                    printf(".");
                printf("%c", out[i++]);
            }
        }
        else{
            for(int i=0; i<index; i++){
                printf("%c", out[i]);
            }
            for(int i=index; i<dot; i++){
                printf("0");
            }
        }
    }
}



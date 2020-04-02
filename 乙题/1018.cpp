#include<bits/stdc++.h>
using namespace std;

int getindex(char x){
    if(x=='B')
        return 0;
    else if(x=='C')
        return 1;
    else
        return 2;
}

char getChar(int x){
    if(x==0)
        return 'B';
    else if(x==1)
        return 'C';
    else
        return 'J';
}

int main(){
    int a1[3];
    int a2[3];
    int b1[3];
    int b2[3];
    for(int i=0; i<3; i++){
        a1[i] = 0;
        b1[i] = 0;
        a2[i] = 0;
        b2[i] = 0;
    }
    int k;
    scanf("%d", &k);
    while(k--){
        char x,y;
        getchar();
        scanf("%c %c", &x, &y);
        if((x=='C'&&y=='J')||(x=='J'&&y=='B')|(x=='B'&&y=='C')){
            a1[0]++;
            b1[2]++;
            a2[getindex(x)]++;
        }
        else if((x=='J'&&y=='C')||(x=='B'&&y=='J')|(x=='C'&&y=='B')){
            a1[2]++;
            b1[0]++;
            b2[getindex(y)]++;
        }
        else{
            a1[1]++;
            b1[1]++;
        }
    }
    for(int i=0; i<3; i++){
        printf("%d", a1[i]);
        if(i<2)
            printf(" ");
        else
            printf("\n");
    }
    for(int i=0; i<3; i++){
        printf("%d", b1[i]);
        if(i<2)
            printf(" ");
        else
            printf("\n");
    }
    int aMaxIndex = 0;
    int bMaxIndex = 0;
    for(int i=1; i<3; i++){
        if(a2[i]>a2[aMaxIndex]) aMaxIndex = i;
        if(b2[i]>b2[bMaxIndex]) bMaxIndex = i;
    }
    printf("%c %c", getChar(aMaxIndex), getChar(bMaxIndex));
    return 0;
}



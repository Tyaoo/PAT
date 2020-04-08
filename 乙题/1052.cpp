#include<bits/stdc++.h>
using namespace std;

int main(){
    char hand[11][5];
    int cntHand = 0;
    char eye[11][5];
    int cntEye = 0;
    char mouth[11][5];
    int cntMouth = 0;

    char ch;
    while((ch = getchar()) != '\n'){
        if(ch == '['){
            scanf("%[^]]", hand[cntHand++]);
        }
    }
    while((ch = getchar()) != '\n'){
        if(ch == '['){
            scanf("%[^]]", eye[cntEye++]);
        }
    }
    while((ch = getchar()) != '\n'){
        if(ch == '['){
            scanf("%[^]]", mouth[cntMouth++]);
        }
    }

    int n;
    scanf("%d", &n);
    while(n--){
        int a, b, c, d, e;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if(a>=1 && b>=1 && c>=1 && d>=1 && e>=1 &&
           a<=cntHand && b<=cntEye && c<=cntMouth && d<=cntEye && e<=cntHand){
            printf("%s(%s%s%s)%s", hand[a-1], eye[b-1], mouth[c-1], eye[d-1], hand[e-1]);
        }
        else{
            printf("Are you kidding me? @\\/@");
        }
        if(n > 0) printf("\n");
    }

}

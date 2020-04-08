#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        int j;
        int k;
        scanf("%d", &k);
        int d = 10;
        while(k % d != k) d *= 10;
        for(j = 1; j < 10; j++){
            if((j*k*k) % d == k)
                break;
        }
        if(j < 10){
            printf("%d %d", j, j*k*k);
        }
        else{
            printf("No");
        }
        if(i < m - 1)
            printf("\n");
    }
	return 0;
}

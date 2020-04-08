#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int scores[m];
    int keys[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &scores[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &keys[i]);
    }
    for(int i = 0 ; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            int tmp;
            scanf("%d", &tmp);
            if(keys[j] == tmp){
                sum += scores[j];
            }
        }
        printf("%d\n", sum);
    }
}

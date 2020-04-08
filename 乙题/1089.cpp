#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int ps[n];
    for(int i = 0 ; i < n; i++){
        scanf("%d", &ps[i]);
    }

    int wolf1 = 0, wolf2 = 0;
    // traverse wolf1's id
    for(int i = 0; i < n; i++){
        // traverse wolf2's id
        for(int j = 0; j < n; j++){
            if(i != j){
                int fault = 0;
                int wolfFault = 0;
                for(int k = 0; k < n; k++){
                    int index = abs(ps[k]) - 1;
                    if(index == i || index == j){
                        if(ps[k] > 0){
                            fault++;
                            if(k == i || k == j)
                                wolfFault++;
                        }
                    }
                    else{
                        if(ps[k] < 0){
                            fault++;
                            if(k == i || k == j)
                                wolfFault++;
                        }
                    }
                    if(fault > 2) break;
                }
                if(fault == 2 && wolfFault == 1){
                    wolf1 = i + 1;
                    wolf2 = j + 1;
                    break;
                }
            }
        }
        if(wolf1 != 0)
            break;
    }
    if(wolf1 != 0){
        printf("%d %d", wolf1, wolf2);
    }
    else{
        printf("No Solution");
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double e;
    int d;
    scanf("%d %lf %d", &n, &e, &d);
    double mayEmpty = 0;
    double mustEmpty = 0;
    for(int i=0; i<n; i++){
        int num;
        int cnt = 0;
        scanf("%d", &num);
        for(int i=0; i<num; i++){
            double tmp;
            scanf("%lf", &tmp);
            if(tmp < e)
                cnt++;
        }
        if(cnt * 2 > num){
            if(num > d)
                mustEmpty++;
            else
                mayEmpty++;
        }
    }
    printf("%.1lf%% %.1lf%%", (mayEmpty/n)*100, (mustEmpty/n)*100);
    return 0;
}

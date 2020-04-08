#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int maxX = 0, maxY = 0, maxId = 0, maxDis = -1;
    int minX = 0, minY = 0, minId = 0, minDis = -1;
    for(int i = 0; i < n; i++){
        int id, x, y;
        scanf("%d %d %d", &id, &x, &y);
        int dis = x*x + y*y;
        if(maxDis == -1 || dis < maxDis){
            maxDis = dis;
            maxX = x;
            maxY = y;
            maxId = id;
        }
        if(dis > minDis){
            minDis = dis;
            minX = x;
            minY = y;
            minId = id;
        }
    }
    printf("%04d %04d", maxId, minId);
    return 0;
}

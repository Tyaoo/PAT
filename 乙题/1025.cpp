#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int add;
    int index;
    int next;
}Node;

int main(){
    int beg, n, k;
    scanf("%d %d %d", &beg, &n, &k);
    Node nodes[n];
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &nodes[i].add, &nodes[i].index, &nodes[i].next);
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(nodes[j].add ==(i? nodes[i-1].next: beg)){
                Node tmp = nodes[j];
                nodes[j] = nodes[i];
                nodes[i] = tmp;
                break;
            }
        }
        if(nodes[i].next == -1){
            n = i+1;
        }
    }

    int x = 0, y = 0;
    for (int i = 0; i<n/k; i++) {
        for (int j = 0; j<k/2; j++) {
            Node tmp;
            x = k * i + j;
            y = k * (i + 1) - j - 1;
            tmp = nodes[x];
            nodes[x] = nodes[y];
            nodes[y] = tmp;
        }
    }
    for(int i=0; i<n-1; i++){
        printf("%05d %d %05d\n", nodes[i].add, nodes[i].index, nodes[i+1].add);
    }
    printf("%05d %d -1", nodes[n-1].add, nodes[n-1].index);
    return 0;
}

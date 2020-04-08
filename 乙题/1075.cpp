#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int address;
    int data;
    int next;
}Node;

int cmp(Node x, Node y){
    return x.address < y.address;
}

int main(){
    int head, n, k;
    scanf("%05d %d %d", &head, &n, &k);
    Node ns[100000];
    Node resns[n];
    int index = 0;
    for(int i = 0; i < n; i++){
        int address;
        scanf("%d", &address);
        scanf("%d %d", &ns[address].data, &ns[address].next);
        ns[address].address = address;
    }

    int p = head;
    while(1){
        if(ns[p].data < 0){
            resns[index++] = ns[p];
        }
        if(ns[p].next == -1)
            break;
        else
            p = ns[p].next;
    }

    p = head;
    while(1){
        if(ns[p].data >= 0 && ns[p].data <= k){
            resns[index++] = ns[p];
        }
        if(ns[p].next == -1)
            break;
        else
            p = ns[p].next;
    }

    p = head;
    while(1){
        if(ns[p].data > k){
            resns[index++] = ns[p];
        }
        if(ns[p].next == -1)
            break;
        else
            p = ns[p].next;
    }

    int i;
    for(i = 0; i < index - 1; i++){
        printf("%05d %d %05d\n", resns[i].address, resns[i].data, resns[i+1].address);
    }
    printf("%05d %d -1", resns[i].address, resns[i].data);
    return 0;
}

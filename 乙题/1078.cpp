#include<bits/stdc++.h>
using namespace std;

int main(){
    char choice;
    scanf("%c", &choice);
    char text[1001];
    int index = 0;
    getchar();
    scanf("%[^\n]", text);
    int len = strlen(text);

    if(choice == 'C'){
        for(int i = 0; i < len; i++){
            int cnt = 1;
            while(text[i+1] == text[i]){
                cnt++;
                i++;
            }
            if(cnt > 1){
                printf("%d", cnt);
            }
            putchar(text[i]);
        }
    }
    else{

        for(int i = 0; i < len; i++){
            int cnt = 0;
            while(text[i] >= '0' && text[i] <= '9'){
                cnt = cnt * 10 + (text[i] - '0');
                i++;
            }
            if(cnt == 0){
                putchar(text[i]);
            }
            for(int j = 0; j < cnt; j++){
                putchar(text[i]);
            }
        }
    }
    return 0;
}

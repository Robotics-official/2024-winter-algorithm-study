#include<stdio.h>

int bulb[4001];

int main() {

    int N, M; scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; ++i) scanf("%d", &bulb[i]);

    for(int i = 0; i < M; ++i) {
        int a, b, c; 
        scanf("%d %d %d", &a, &b, &c);
        if(a == 1) {
            bulb[b] = c;
        }
        else if(a == 2) {
            for(int j = b; j <= c; ++j) bulb[j] = 1 - bulb[j];
        }
        else if(a == 3) {
            for(int j = b; j <= c; ++j) bulb[j] = 0;
        }
        else if(a == 4) {
            for(int j = b; j <= c; ++j) bulb[j] = 1;
        }
    }
    for(int i = 1; i <= N; ++i) printf("%d\n", bulb[i]);
    
    return 0;
}
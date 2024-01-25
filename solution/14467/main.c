#include<stdio.h>

int cow[11];

int main() {
    int N; scanf("%d", &N);

    for(int i = 1; i <= 10; ++i) cow[i] = -1;

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        int a, b; scanf("%d %d", &a, &b);
        if(cow[a] != -1 && cow[a] != b) ++ ans;
        cow[a] = b;
    }
    printf("%d", ans);

    return 0;
}
#include<stdio.h>

int cnt[10001];

int main() {

    int N; scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        int x; scanf("%d", &x);
        ++ cnt[x];
    }
    for(int i = 1; i <= 10000; ++i) {
        for(int j = 0; j < cnt[i]; ++j) {
            printf("%d\n", i);
        }
    }

    return 0;
}
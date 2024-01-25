#include<stdio.h>

const int MAX = 1000000;
int cnt[2000001];

int main() {

    int N; scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        int x; scanf("%d", &x);
        ++ cnt[x + MAX];
    }

    for(int i = MAX * 2; i >= 0; --i) {
        if(cnt[i]) {
            printf("%d\n", i - MAX);
        }
    }

    return 0;
}
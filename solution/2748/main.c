#include<stdio.h>

long long fibonacci[91];

int main() {

    int N;
    scanf("%d", &N);

    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i <= 90; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    printf("%lld", fibonacci[N]);

    return 0;
}
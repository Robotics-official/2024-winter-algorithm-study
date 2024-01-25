#include<stdio.h>

int arr[1000001];

int compare(const int *a, const int *b) {
    int x = *(int*)a, y = *(int*)b;
    if(x > y) return 1;
    else if(x == y) return 0;
    return -1;
    // return (x > y) - (x < y);
} 

int main() {

    int N; scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);
    for(int i = 0; i < N; ++i) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
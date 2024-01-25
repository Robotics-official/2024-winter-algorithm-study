#include<stdio.h>

int chk(int a, int b) {
    for(int i=0;i<2;i++) {
        if(a % 10 == b) return 1;
        a /= 10;
    }
    return 0;
}

int main(){
    int N, K; 
    scanf("%d %d", &N, &K);
    int answer = 0;
    for(int i=0;i<(N+1)*3600;i++) {
        int hh = i / 3600;
        int mm = i / 60 % 60;
        int ss = i % 60;
        if(chk(hh, K) || chk(mm, K) || chk(ss, K)) answer++;
    }
    printf("%d", answer);

    return 0;
}
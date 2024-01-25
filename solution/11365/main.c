#include<stdio.h>
#include<string.h>

char buf[501];

int main() {

    while(1) {
        scanf(" %[^\n]", buf);
        if(strcmp(buf, "END") == 0) break;
        int len = strlen(buf);
        for(int i = len - 1; i >= 0; --i) printf("%c", buf[i]);
        printf("\n");
    }

    return 0;
}
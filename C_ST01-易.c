#include <stdio.h>
#include <stdlib.h>

void convert(int n, int base){
    char r[32];
    char d[] = "0123456789ABCDEF";
    int a = 0;

    while (n > 0) {
        r[a++] = d[n % base];
        n /= base;
    }

    for (int i = a - 1; i >= 0; i--) {
        putchar(r[i]);
    }
    putchar('\n');
}

int main() {

    int base, n;

    while (scanf("%d %d", &base, &n) != EOF) {
        convert(n, base);
    }

    return 0;
}
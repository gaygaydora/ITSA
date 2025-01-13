#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int mvp = (a * 1) + (b * 2) + (c * 2) + (d * 2) - (e * 2);

    if (mvp > 45) {
        printf("A\n");
    } else if (mvp >= 35 && mvp <= 44) {
        printf("B\n");
    } else if (mvp >= 25 && mvp <= 34) {
        printf("C\n");
    } else {
        printf("D\n");
    }

    return 0;
}
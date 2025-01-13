#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("error\n");
    } else if (n < 60) {
        printf("E\n");
    } else if (n < 70) {
        printf("D\n");
    } else if (n < 80) {
        printf("C\n");
    } else if (n < 90) {
        printf("B\n");
    } else {
        printf("A\n");
    }

    return 0;
}

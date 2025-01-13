#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a;
    while (scanf("%d", &a) != EOF) {
        double b = a * 1.6;
        printf("%.1f\n", b);
    }
    return 0;

}
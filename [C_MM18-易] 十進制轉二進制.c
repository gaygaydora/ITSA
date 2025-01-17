#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a;

     scanf("%d", &a);

    for (int i = 7; i >= 0; i--) {
        printf("%d", (a >> i) & 1);
    }
    printf("\n");

	return 0;
}
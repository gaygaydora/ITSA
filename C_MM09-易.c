#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i;

    scanf("%d", &i);

    if (i >= 31) {
        printf("Value of more than 31\n");
    } else {
       
        int result = 1 << i;
        printf("%d\n", result);
    }

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d+%d=%d\n", a, b, a + b);         
    printf("%d*%d=%d\n", a, b, a * b);         
    printf("%d-%d=%d\n", a, b, a - b);

    if (b != 0) {
        int q = a / b;  
        int r = a % b; 
        if (r < 0) {
            r += abs(b);
            q = 0;
        }

        printf("%d/%d=%d...%d\n", a, b, q, r);
    }
    return 0;
}
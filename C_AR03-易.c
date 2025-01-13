#include <stdio.h>
#include <math.h>

int main() {
    int a[6]; 
    int s = 0; 

    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 6; i++) {
        s += a[i] * a[i] * a[i]; 
    }

    printf("%d\n", s);

    return 0;
}

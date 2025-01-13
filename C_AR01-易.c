#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int num;

    while (scanf("%d", &num) == 1) {
        arr[n++] = num;
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i != 0) {  
            printf(" ");
        }
    }
    printf("\n"); 
    return 0;
}

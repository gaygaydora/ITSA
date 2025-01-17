#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int a, b, c = 0;
scanf("%d %d", &a, &b);

if (a > b) {
    int temp = a;
    a = b;
    b = temp;
    }

for (int i = a; i <= b; i++) {
    c += i;
}
printf("%d\n",c);

return 0;
}
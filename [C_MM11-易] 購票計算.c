#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;

    scanf("%d",&n);

    int a, b, c;
        a = n / 10;
        n %= 10;
        b = n/5;
        n %= 5;
        c = n;
        n = 0;
        printf("NT10=%d\nNT5=%d\nNT1=%d\n",a ,b, c);

	return 0;
}
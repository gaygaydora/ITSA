#include <stdio.h>
#include <math.h>

int main() {
    double s, a;

    scanf("%lf", &s);

    a = s * s;

    printf("%.1f\n", round(a * 10) / 10);

    return 0;
}
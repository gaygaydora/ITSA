#include <stdio.h>

int main() {
    float h;
    int g;

    while (scanf("%f %d", &h, &g) != EOF) {
        float s;

        if (g == 1) { 
            s = (h - 80) * 0.7;
        } else if (g == 2) {  
            s = (h - 70) * 0.6;
        }

        printf("%.1f\n", s);
    }

    return 0;
}
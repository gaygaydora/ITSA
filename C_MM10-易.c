#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    float c;  
    while (scanf("%f", &c) != EOF) { 
    
        float f = (c * 9.0 / 5.0) + 32.0;
        
        printf("%.1f\n", f);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

float a, b, c;

while(scanf("%f %f %f",&a, &b, &c) != EOF){
    float d = ((a + b) * c) / 2;
    printf("Trapezoid area:%.1f\n", d);
}
	return 0;
}
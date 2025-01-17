#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

float a, b, c;

while(scanf("%f %f",&a, &b) != EOF){
    c = (a*b) / 2;
    printf("%.1f\n",c); 
}
	return 0;
}
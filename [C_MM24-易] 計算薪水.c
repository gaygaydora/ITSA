#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double a, b, c;

    while(scanf("%lf %lf", &a, &b) != EOF){
        if(a <= 60){
            printf("%.1lf\n", a*b);
        }else if(a <= 120){
            c = (a - 60) * 1.33 * b + 60 * b;
            printf("%.1lf\n", c);
        }else{
            c = (a - 120)* 1.66 * b + 60 * 1.33 * b + 60 * b;
            printf("%.1lf\n",c);
        }
    }

	return 0;
}
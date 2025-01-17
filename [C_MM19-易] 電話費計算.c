#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int a;
double b;

while(scanf("%d",&a) != EOF){
    if(a <= 800){
        b = a*0.9;
    }else if(a < 1500){
        b = a*0.9*0.9;
    }else{
    b = a*0.9*0.79;
    }
    printf("%.1f\n",b);
}

	return 0;
}
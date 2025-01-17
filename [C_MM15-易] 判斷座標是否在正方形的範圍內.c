#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int a, b;

while(scanf("%d %d", &a, &b) != EOF){
    if (a > 100 || b > 100 || a < 0 || b < 0){
        printf("outside\n");
    }else{
        printf("inside\n");
    }
}

	return 0;
}
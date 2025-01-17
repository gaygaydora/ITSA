#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int x,y;

    scanf("%d %d",&x,&y);
    
    if(x * x + y * y <= 10000){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
    
	return 0;
}
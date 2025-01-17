#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int a, b = 0;

scanf("%d", &a);

for(int i =3;i <= a; i++){
        if(i%3 == 0)
        {
            b += i;
        }
    }
printf("%d\n",b);
	return 0;
}
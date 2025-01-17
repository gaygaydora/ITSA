#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int a, s, m, h, d;

scanf("%d", &a);

d = a / 86400; 
a %= 86400;   
h = a / 3600;  
a %= 3600;    
m = a / 60;    
s = a % 60;    

printf("%d days\n%d hours\n%d minutes\n%d seconds\n",d ,h, m, s);
	return 0;
}
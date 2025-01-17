#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    long a,ans = 1;

    while(scanf("%ld",&a) != EOF)
    {
        if(a > 0 && a <20)
        {
            for(int i = 1;i <= a;i++)
            {
                ans *= i;
            }
            printf("%ld\n",ans);
        }
        ans = 1;
    }
    
	return 0;
}
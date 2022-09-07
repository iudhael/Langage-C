#include <stdio.h>
#include <stdlib.h>
/*factoriel */
int main()
{    int n,i,fac;
    printf("Hello world!\n");
    printf("Quel factoriel voulez vous?\n");
    scanf("%d",&n);
    fac=1;
        for(i=2; i<=n; i=i+1)
        {
            fac=fac*i;

        }
        printf("le factoriel de %d est %d",n,fac);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/* boucle inconditionnelle for*/
int main()
{
    int i,
        n=0;

    printf("Hello world!\n");
    for(i=0 ; i<4 ; i=i+1)
    {
        n=n+i;
        printf("%d",n);
        printf("\n");
    }
    return 0;
}

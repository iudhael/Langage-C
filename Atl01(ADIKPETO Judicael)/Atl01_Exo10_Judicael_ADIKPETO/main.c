#include <stdio.h>
#include <stdlib.h>
/* Ce programme  demande un nombre de d�part, et calcule la somme des entiers jusqu�� ce nombre.*/
int main()
{
    double n;
    int i,N,
        som=0;

        printf("Hello!\n");
        printf("Saisissez un nombre\n");
        scanf("%lf",&n);

            N=n;
        for(i=1; i<=N; i++)
        {
            som=som+i;
        }
        printf("la somme est %d.",som);




    return 0;
}

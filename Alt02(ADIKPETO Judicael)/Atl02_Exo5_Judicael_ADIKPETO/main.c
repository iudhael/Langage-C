#include <stdio.h>
#include <stdlib.h>
/*ce programme affiche un triangle formé d’étoiles. La hauteur du triangle (c’est-à-dire le nombre de lignes) sera fournie en donnée, comme dans l’exemple ci-dessous.*/
int main()
{
    int a,i,j,k;
        printf("Hello!\n");
        printf("Quelle est la hauteur de votre triangle?\n");
        scanf("%d",&a);
        printf("Votre triangle a pour hauteur %d.\n",a);
            for(i=0; i<a ; i++)
                {

                    for(k=0; k<1+i; k++)
                    {
                        printf("*");
                    }
                    /*for(j=a-i; j>0; j--)
                    {
                      printf(" ");
                    }*/
                    printf("\n");

                }

    return 0;
}

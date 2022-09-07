#include <stdio.h>
#include <stdlib.h>
/*tableau a deux dimensions : remplir le tableau avec des valeurs consécutif*/
int main()
{
    int i,j,val,N=2,M=3,
        tab[N][M];
    printf("Hello world!\n");
    val=1;

        for(i=0; i<2; i=i+1)
            for(j=0; j<3; j=j+1)
            {

                tab[i][j]=val;
                val=val+1;
            }
        for(i=0; i<2; i=i+1)
            for(j=0; j<3; j=j+1) /*l'inversion de cette ligne for(j=0; j<3; j=j+1) avec celle qui la précède provoque une permutation */
            {

                printf("%d    ",tab[i][j]);/*affiche et espace les elements*/
            }





    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/* permet la saisi d'un tableau à deux dimension de saisir et d'afficher  le contenu et de calculer la somme */
int main()
{
     int i,j,N=5,M=9,som=0,
        tab[N][M];
    printf("Hello world!\n");
    do
    {
        printf("saisissez le nombre de ligne pour votre tableau\n Attention ce nombre ne doit pas depasser 5\n");
    scanf("%d",&N);
    printf("\n");
    }
    while(N>5);

    do
    {

    printf("saisissez le nombre de colonne pour votre tableau\n Attention ce nombre ne doit pas depasser 9\n");
    scanf("%d",&M);

    }
    while( M>9);


        for(i=0; i<2; i=i+1)
            for(j=0; j<3; j=j+1)
            {
                printf("saisissez la valeur de la case %d  %d\n",i,j);
                scanf("%d",&tab[i][j]);
            }
        for(i=0; i<2; i=i+1)
            for(j=0; j<3; j=j+1)
            {
                printf("%d    ",tab[i][j]);/*affiche et espace les elements*/
                som=som+tab[i][j];
            }
            printf("\n");
            printf("la somme des elements du tableau est %d",som);


    return 0;
}

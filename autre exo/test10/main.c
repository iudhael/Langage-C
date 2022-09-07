#include <stdio.h>
#include <stdlib.h>
/* ce programme permet de calculer le périmetre, l'aire d'un cercle de rayon saisi et d'afficher le résultat*/
int main()
{
    int rayon;/*ici le rayon est un entier*/

    float pi=3.14,  perimetre, aire;


        printf("Hello world!\n");
        printf("Saisissez votre rayon");
            printf("\n");
            scanf("%d",&rayon);/*si la personne saisi un nombre a virgule le calcue se fera avec la partie entiere du rayon*/

                perimetre=(2*rayon)*pi;
                aire=pi*(rayon*rayon);


        printf("rayon     : %d.\nperimetre : %f\naire      : %f\n",rayon,perimetre,aire);

    return 0;
}

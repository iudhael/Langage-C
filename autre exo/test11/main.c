#include <stdio.h>
#include <stdlib.h>
/* ce programme permet de calculer le p�rimetre, l'aire d'un cercle de rayon saisi et d'afficher le r�sultat*/
int main()
{

    float pi=3.14,perimetre, aire, rayon;/*ici le rayon est un nombre � virgule*/


        printf("Hello world!\n");
        printf("Saisissez votre rayon");
            printf("\n");
            scanf("%f",&rayon);/*si la personne saisi un nombre a virgule le calcue se fera avec la partie entiere du rayon*/

                perimetre=(2*rayon)*pi;
                aire=pi*(rayon*rayon);


        printf("rayon     : %f\nperimetre : %f\naire      : %f\n",rayon,perimetre,aire);

    return 0;
}

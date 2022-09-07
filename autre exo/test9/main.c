#include <stdio.h>
#include <stdlib.h>
/* ce programme permet de calculer le périmetre, l'aire d'un cercle de rayon saisi et d'afficher leur partie entiere*/
int main()
{
    int rayon,p,a;
    float pi=3.14,  perimetre, aire;


        printf("Hello !\n");

        printf("Saisissez l'entier constituant votre rayon");
        printf("\n");
        scanf("%d",&rayon);

                perimetre=(2*rayon)*pi;
                aire=pi*(rayon*rayon);
                p=perimetre;
                a=aire;

        printf("rayon     : %d\np       : %d\na      : %d\n",rayon,p,a);

    return 0;
}







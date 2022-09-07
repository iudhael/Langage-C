#include <stdio.h>
#include <stdlib.h>
/* ce programme permet de calculer le périmetre, l'aire d'un cercle de rayon 5.27e5 et de les afficher*/
int main()
{
    float rayon=5.27e5, perimetre, aire, pi=3.14;

        perimetre=2*pi*rayon;
        aire=pi*rayon*rayon;
    printf("rayon     : %e\nperimetre : %e\naire      : %e\n",rayon+5,perimetre+6,aire+11);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*ce progamme permet le calcule du carré;cube d'un nombre à virgule et de donner la partie entiere du cube*/
int main()
{
    float n=12.85, carre,cube;
    int entier;

        carre=n*n;
        cube=carre*n;
    printf("le carre de %f est:%f\n le cube est:%f",n, carre,cube);
    entier=cube;
    printf("\n");
    printf("la partie entire du cube de %f est:%d ",n,entier);
    return 0;
}

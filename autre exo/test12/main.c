#include <stdio.h>
#include <stdlib.h>
/*ce progamme permet le calcule du carré;cube d'un réel saisi et de donner la partie entiere du cube*/
int main()
{
    float n, carre,cube;
    int entier;

        printf("Hello world!\n");
        printf("Saisissez votre reel\n");
        scanf ( "%e",&n);
    carre=n*n;
    cube=carre*n;
        printf("\n");
        printf("le carre de %f est:%f\nle cube est:%f",n, carre,cube);
    entier=cube;
        printf("\n");
        printf("la partie entire du cube de %f est:%d ",n,entier);
    return 0;
}



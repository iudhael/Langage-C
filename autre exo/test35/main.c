#include <stdio.h>
#include <stdlib.h>

/* TABLEAU DE TAILLE 5 SOMME DES 5 ELEMENTS*/

int main()
{
    int i,som=0,N=5,
        tab[N];

    printf("Hello world!\n");
        for(i=0; i<N; i=i+1)
        {
            printf("saisissez la valeur %d\n",i+1);
            scanf("%d",&tab[i]);
            printf("\n");
            som=som+tab[i];

        }
        printf("la somme des elements du tableau est %d",som);
    return 0;
}

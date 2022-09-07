#include <stdio.h>
#include <stdlib.h>
/* permet grace à la fonction maxtab de retourner le plus grand entier d'un tableau.
la fonction doit contenir comme parametre un tableau avec le nombre d'élement qu'ellle contiendra
le programme pricipale apres avoir fait rempli un tableau de 5 entiers fait appelle à la fonction qui donne le plus grand entier*/


int maxTab(int v[], int N)
{
    int max,i;
    max=0;
    for(i=0; i<N; i=i+1)
    {

        if(v[i]>max) max=v[i];
    }

    return max;
}

int main()
{
    int t[5],i,Max;
    printf("Hello world!\n");
    for(i=0; i<5; i=i+1)
    {
        printf("Saisissez un entier \n");
        scanf("%d",&t[i]);

    }
    printf("\n");

    for(i=0; i<5; i=i+1)
    {
        printf("%d\n",t[i]);

    }
    Max=maxTab(t, 5);
    printf("le plus grand des entiers est: %d",Max);

    return 0;
}

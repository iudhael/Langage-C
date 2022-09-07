#include <stdio.h>
#include <stdlib.h>
/*Cette fonction  renvoie la somme des valeurs contenues dans le tableau (utilisez un return pour renvoyer la valeur).*/

int sommeTableau(int tableau[], int tailleTableau)
{
    int i,som=0;

    for(i=0; i<tailleTableau; i++)
    {
        som=som+tableau[i];
    }
    return som;

}

int main()
{
    int tableau[5],j;

    printf("Hello!\n");
    for(j=0; j<5; j++)
    {
        printf("Saisissezz la valeur %d du tableau\n",j+1);
        scanf("%d",&tableau[j]);
    }
    printf("La somme des elements du tableau est:%d",sommeTableau(tableau,5));
    return 0;
}

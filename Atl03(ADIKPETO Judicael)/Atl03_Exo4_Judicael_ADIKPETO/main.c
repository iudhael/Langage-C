#include <stdio.h>
#include <stdlib.h>

/*Cette fonction moyenneTableau calcule et renvoie la moyenne des valeurs.*/

double moyenneTableau(int tableau[], int tailleTableau)
{
    int i,som=0;
    double moy=0;

    for(i=0; i<tailleTableau; i++)
    {
        som=som+tableau[i];
    }

    moy=som/tailleTableau;
    return moy;
}

int main()
{
     int tableau[3],j;
     double moyenne;

    printf("Hello!\n");
    for(j=0; j<3; j++)
    {
        printf("Saisissezz la valeur %d du tableau\n",j+1);
        scanf("%d",&tableau[j]);
    }
    moyenne=moyenneTableau(tableau,3);
    printf("La moyenne des elements du tableau est:%lf",moyenne);
    return 0;
}

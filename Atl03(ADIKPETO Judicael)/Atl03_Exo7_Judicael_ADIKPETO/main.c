#include <stdio.h>
#include <stdlib.h>

/*Cette fonction classe les valeurs d'un tableau dans l'ordre croissant.
 Ainsi, un tableau qui vaut {15, 81, 22, 13} doit à la fin de la fonction valoir {13, 15, 22, 81}.*/

 void ordonnerTableau(int tableau[], int tailleTableau)
 {
     int i,j,temps;

     for(i=0; i<tailleTableau; i++)
        for(j=i+1; j<tailleTableau; j++)
            if(tableau[i]>tableau[j])
            {
               temps=tableau[i];
               tableau[i]=tableau[j];
               tableau[j]=temps;
            }

     printf ("l'ordre croissant des elements du tableau est\n");
                for(i=0; i<tailleTableau; i=i+1)
                {

                    printf("%d ",tableau[i]);
                }

 }

int main()
{
    int N=15,
        tableau[N],i;

     do
        {
            printf("saisissez la taille de votre tableau\nAttention la taille doit etre inferieur ou egale a 15 et etre un entier!\n");
            scanf("%d",&N);
            if(N>15) printf("reessayer\n");
        }
        while (N>15);

      for(i=0; i<=(N-1); i=i+1)
            {
                printf("Saisissez l'entier %d\n",i+1);
                scanf("%d",&tableau[i]);
            }
               ordonnerTableau(tableau, N);
    return 0;
}

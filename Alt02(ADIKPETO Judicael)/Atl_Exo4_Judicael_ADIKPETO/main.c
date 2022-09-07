#include <stdio.h>
#include <stdlib.h>
/*une fonction permettant d’afficher un rectangle d’étoile ‘’*’’ suivant les dimensions saisies par l’utilisateur.*/
/* Ces dimensions doivent être envoyées en paramètres à la fonction*/

void rectangleEtoile(int M, int N)
{
   int i,j;


        for(i=1; i<=N; i=i+1)
                {
                    for(j=1; j<=M; j=j+1)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
}

int main()
{
    int n,m;

        printf("Hello!\n");
        printf("combien d'asterisques pour le premier cote\n");

        scanf("%d",&n);
        printf("\n");
        printf("combien d'asterisques pour le second  cote\n");
        scanf("%d",&m);
            rectangleEtoile(n,m);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>


/*cette  fonction retourne l’indice du premier élément strictement négatif
parmi les n premiers éléments d’un tableau de double (-1si aucun élément n’est
négatif)*/
int indice_premier_negatif (double t[], int n)
{
    int i,j,k;
        for(i=0; i<n; i++)
        {

            if(t[i]<0)
                  {
                        k=i;
                         return k;
                  }
            else return -1;

        }


}
int main()
{
    int N=15,i;
    double  t[N];

        printf("Hello !\n");
        do
        {
            printf("Saisissez la taille de votre tableau taille<15\n");
            scanf("%d",&N);
        }
        while(N>15);
        for (i=0; i<N; i++)
        {
            printf("Saisissez les reels de votre tableau\n");
            scanf("%lf",&t[i]);
        }
        printf("Lindice du premier element negatif est %d",indice_premier_negatif (t, N));
    return 0;
}

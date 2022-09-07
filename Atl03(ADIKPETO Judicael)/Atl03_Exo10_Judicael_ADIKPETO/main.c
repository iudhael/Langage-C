#include <stdio.h>
#include <stdlib.h>
/*cette fonction  retourne l’indice du plus grand des n premiers éléments
d’un tableau de double (en cas d’ex-æquo, l’indice du premier d’entre eux).*/
int indice_plus_grand (double t[], int n)
{
    int i,j,min=n-1;
    double Max=0;

        for(i=0; i<n; i++)
        {

            if(t[i]>Max)
               {
                    Max=t[i];
                    j=i;
               }
           /* else if(t[i]==t[j])
            {

            }*/
        }
        return j;
}

int main()
{
    int N=15,i;
    double  t[N];

        printf("Hello !\n");
        do
        {
            printf("Saisissez la taille de votre tableau\n");
            scanf("%d",&N);
        }
        while(N>15);
        for (i=0; i<N; i++)
        {
            printf("Saisissez les reels de votre tableau\n");
            scanf("%lf",&t[i]);
        }
        printf("Lindice recherche est %d",valeur_plus_grand (t, N));
    return 0;
}

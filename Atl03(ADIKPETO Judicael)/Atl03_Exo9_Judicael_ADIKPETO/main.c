#include <stdio.h>
#include <stdlib.h>
/*cette fonction retourne la valeur du plus grand des n premiers éléments
d’un tableau de double.*/

double valeur_plus_grand (double t[], int n)
{
    int i;
    double Max=0;

        for(i=0; i<n; i++)
        {
            if(t[i]>Max)
                Max=t[i];
        }
        return Max;
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
        printf("Le plus grand des elements du tableau est %lf",valeur_plus_grand (t, N));
    return 0;
}

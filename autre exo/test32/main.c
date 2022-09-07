#include <stdio.h>
#include <stdlib.h>
/* tableau permetant d'afficher le carre des entiers qu'il contient de faire sortie le maximum avec son son indice dans le tableau*/
int main()
{
    int N=10, max,maxcarre,j,
        tab[N],
        carre,
        i;
    printf("Hello world!\n");
    max=0;

        do
        {
            printf("saisissez la taille de votre tableau\nAttention la taille doit etre inferieur ou egale a 10 et etre un entier!\n");
            scanf("%d",&N);
            if(N>10) printf("reessayer\n");
        }
        while (N>10);
            for(i=0; i<N; i=i+1)
            {
                printf("Saisissez l'entier %d\n",i+1);
                scanf("%d",&tab[i]);
                if(tab[i]>max)
                {
                    max=tab[i];
                    j=i;

                }

                printf("\n");
            }
            printf("le plus grand des elements est %d et son indice est %d\n",max,j+1);

             printf("carre des entiers\n");

            for(i=0; i<=(N-1); i=i+1)
            {
              carre=tab[i]*tab[i];

              printf("%d         %d\n",tab[i],carre);
            }
            maxcarre=max*max;
            printf("le carre du plus grand est %d",maxcarre);

    return 0;
}

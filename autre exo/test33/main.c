#include <stdio.h>
#include <stdlib.h>
/* tri croissant*/
int main()
{
    int N=15,j,temp,
        tab[N],
        i;
    printf("Hello world!\n");

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
                scanf("%d",&tab[i]);
            }
            for(i=0; i<(N-1); i=i+1)        /* i<N; marche egalement*/
                for(j=i+1; j<N; j=j+1)
                    if(tab[i]>tab[j])           /*si on ecrit tab[i]<tab[j] avec un signe d'infériorite on aura l'ordre décroissant*/
                    {
                        temp=tab[i];
                        tab[i]=tab[j];
                        tab[j]=temp;
                    }


            printf ("l'ordre croissant des elements du tableau est\n");
                for(i=0; i<N; i=i+1)
                {

                    printf("%d ",tab[i]);
                }
                printf("\n");


    return 0;
}



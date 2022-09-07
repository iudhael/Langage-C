#include <stdio.h>
#include <stdlib.h>
/* permet de lire 6 valeurs d'un tableau en les demandant ligne par ligne et qui les réecrie colone par colone exercice VII.7 page134*/
int main()
{
    int i,j,N=2,M=3,
        tab[N][M];
    printf("Hello world!\n");


        for(i=0; i<1; i=i+1)
        {
             printf("saisisez la ligne %d\n",i);
            for(j=0; j<3; j=j+1)
            {

                scanf("%d",&tab[i][j]);
                printf("\n");

            }
        }
             for(i=1; i<=1; i=i+1)
             {
                 printf("saisisez la ligne %d\n",i);
                 for(j=0; j<3; j=j+1)
            {

                scanf("%d",&tab[i][j]);
                printf("\n");

            }
             }


            for(i=0; i<1; i=i+1)
           {
               printf("voici la ligne %d:  ",i);
                for(j=0; j<3; j=j+1)

            {
                 printf("%d ",tab[i][j]);

            }
           }
              printf("\n");


            for(i=1; i<=1; i=i+1)
           {
               printf("voici la ligne %d:  ",i);
                for(j=0; j<3; j=j+1)

            {
                 printf("%d ",tab[i][j]);

            }
           }
              printf("\n");


        for(j=0; j<1; j=j+1)
             {
                 printf("voici la colone %d: ",j);
                 for(i=0; i<2; i=i+1)
                {
                    printf("%d ",tab[i][j]);

                }
             }
              printf("\n");
         for(j=1; j<=1; j=j+1)

             {
                 printf("voici la colone %d: ",j);
                 for(i=0; i<2; i=i+1)
                {

                    printf("%d ",tab[i][j]);

                }
             }
        printf("\n");
         for(j=2; j<=2; j=j+1)

             {
                 printf("voici la colone %d: ",j);
                 for(i=0; i<2; i=i+1)
                {

                    printf("%d ",tab[i][j]);

                }
             }






    return 0;
}

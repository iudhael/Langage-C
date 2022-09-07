#include <stdio.h>
#include <stdlib.h>
/* affiche un carre ou un rectangle d'astérisque*/
int main()
{ int i,j,M,N;
    printf("Hello world!\n");
        printf("combien d'asterisques pour le premier cote\n");
        scanf("%d",&N);
        printf("\n");
        printf("combien d'asterisques pour le second  cote\n");
        scanf("%d",&M);
        for(i=1; i<=N; i=i+1)
                {
                    for(j=1; j<=M; j=j+1)
                    {
                        printf("*");
                    }
                    printf("\n");

                }

    return 0;
}

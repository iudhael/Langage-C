#include <stdio.h>
#include <stdlib.h>
/* recherche de maximum*/
int main()
{
    int i,val,max, N;
    printf("Hello world!\n");
    printf("combien de valeur voulez vous saisirz?\n");
    scanf("%d",&N);

    max=0;
        for (i=1; i<=N; i=i+1)
        {
            printf("saisissez la valeur %d\n",i);
            scanf("%d",&val);
            printf("\n");


            if(val>max) max=val;
        }
        printf("la plus grande valeur taper est %d",max);
    return 0;
}

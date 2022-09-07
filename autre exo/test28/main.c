#include <stdio.h>
#include <stdlib.h>
/* affiche les tables de multiplications sans saisi*/
int main()
{
    int j,i,produit;
    printf("Hello world!\n");

        for(i=0; i<=10; i=i+1)
        {
            printf("table de multiplication par %d\n",i);
            for(j=1; j<=10; j=j+1)


                {
                    produit=j*i;
                    printf("%d x %d = %d\n",j,i,produit);
                }

        }
        printf("bye");

    return 0;
}

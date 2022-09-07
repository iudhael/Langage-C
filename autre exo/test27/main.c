#include <stdio.h>
#include <stdlib.h>
/* tables de miltiplications demander par la personne*/
int main()
{
    int n,i,produit;
    printf("Hello world!\n");
    printf("quelle table de multiplication voulez vous?\n");
    scanf("%d",&n);
     printf("\n");
        for(i=0; i<=10; i=i+1)
        {
           produit=n*i;
            printf("%d x %d = %d\n",n,i,produit);
        }
        printf("bye");
    return 0;
}

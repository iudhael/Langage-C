#include <stdio.h>
#include <stdlib.h>
/* exo V1 page 82*/
int main()
{
    int n;

    printf("Hello world!\n");
        do
        {
            printf(" saisissez un entier positif inferieur a 100\n");
            scanf("%d",&n);
            printf("\n");

           if((n<0) || (n>100)) printf("svp positif et inferieur a 100");
           printf("\n");


        }
        while ((n<0) || (n>100));
        printf ("merci pour %d",n);


    return 0;
}

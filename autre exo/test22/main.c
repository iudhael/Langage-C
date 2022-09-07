#include <stdio.h>
#include <stdlib.h>
/* while correspon à tant que ...  faire ... fin tant que test 21*/
int main()
{
    int n;
    printf("Hello world!\n");

    printf(" saisissez un entier positif inferieur a 100\n");
            scanf("%d",&n);
            printf("\n");

    while ((n<0) || (n>100))
    {
            printf(" saisissez un entier positif inferieur a 100\n");
            scanf("%d",&n);
            printf("\n");

           if((n<0) || (n>100)) printf("svp positif et inferieur a 100");
           printf("\n");
    }
          printf ("merci pour %d",n);


    return 0;
}

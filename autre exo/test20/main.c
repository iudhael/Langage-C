#include <stdio.h>
#include <stdlib.h>
/*affiche le carre tant que l'entier est différent de 0: faire tant que la condition est vraie*/
int main()
{
    int n;
    printf("Hello world!\n");

        do
        {
            printf("Saisissez un entier different de 0\n");
             scanf("%d",&n);
             if(n!=0)
            printf("le carre est %d",n*n);
            printf("\n");


        }
        while(n!=0);

    return 0;
}

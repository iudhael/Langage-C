#include <stdio.h>
#include <stdlib.h>
/* donnne la saisi à l'utilisateur qui tape deux entiers et affiche croissant ou non */
int main()
{
   int n,p;

    printf("Hello world!\n");

    printf("Saisissez deux entiers\n");

    scanf("%d%d",&n,&p);

        if (n<p)
            printf("croissant\n");
        if(n==p)
                printf("egaux\n");
         if(n>p)
            printf("non croissant\n");

    printf("byebye");

    return 0;
}

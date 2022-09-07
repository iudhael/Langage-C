#include <stdio.h>
#include <stdlib.h>
/* choix entre deux blocs d'instructions semblable à tesst15*/
int main()
{
    int n,p, max;

    printf("Hello world!\n");
    printf ("saisissez deux entiers\n");

    scanf("%d%d",&n,&p);
        if (n<p)
            {
               max=p;
               printf("croissant\n");
            }
        else
            {
                max=n;
                printf("non croissant\n");

            }
    printf("le plus grand nombre est %d",max);



    return 0;
}

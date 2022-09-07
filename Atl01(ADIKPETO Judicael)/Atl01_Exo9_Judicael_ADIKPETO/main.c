#include <stdio.h>
#include <stdlib.h>
/*Ce programme demande un nombre compris entre 10 et 20, jusqu’à ce que la réponse convienne.
En cas de réponse supérieure à 20, on fera apparaitre un message : Plus petit ! , et inversement, Plus grand ! si le nombre est inférieur à 10.*/

int main()
{
    double n;

        printf("Hello !\n");
    do
    {
        printf("Saisissez un nombre compris entre 10 et 20.\n");
        scanf("%lf",&n);
            if(n>20)
                printf("Plus petit!\n");
            if(n<10)
                printf("Plus grand!\n");
    }
    while(n<=10 || n>=20);
        printf("Correcte!");
    return 0;
}

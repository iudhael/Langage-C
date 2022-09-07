#include <stdio.h>
#include <stdlib.h>
/*Ce programme demande deux nombres à l’utilisateur, puis calcule et affiche la demi-somme de ces nombres.*/
int main()
{
    double n1,n2, DemiSom;
        printf("Hello !\n");
        printf("Saisissez deux nombres\n");
        scanf("%lf%lf",&n1,&n2);
            DemiSom=(n1+n2)/2;

        printf("La demi-somme de %lf et de %lf est: %lf.\n",n1,n2,DemiSom);
        printf("bye.");


    return 0;
}

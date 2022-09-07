#include <stdio.h>
#include <stdlib.h>
/*Ce programme demande deux nombres à l’utilisateur et l’informe ensuite si leur produit est négatif ou positif (on laisse de côté le cas où le produit est nul).Toutefois : on ne doit pas calculer le produit des deux nombres.*/
int main()
{
    float n1,n2;
        printf("Hello!\n");
        printf("Saisissez deux nombres\n");
        scanf("%f%f",&n1,&n2);

    if((n1>0 && n2>0) || (n1<0 && n2<0))
        printf("Ce nombre est positif\n");
    else
        if((n1<0 && n2>0) || (n1>0 && n2<0))
            printf("Le produit sera negatif");


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*Ce programme permet de calculer la somme des n premiers termes de la « série harmonique », c’est-à-dire la somme :1 + 1/2 + 1/3 + 1/4 + ..... + 1/n*/
/*La valeur de n sera lue en donnée.*/
int main()
{
    int v,j;
    double s=0;

        printf("Hello!\n");
        printf("Saisissez un entier.\n");
        scanf("%d",&v);
    for (j=1; j<=v; j++)   s=s+(1.0/j);                                 /*il est techniquement impossible de diviser deux unt dans un double.
                                                                        donc je convertie la partie entiers de a contenue dans c en double que j'affecte à g*/


    printf("La somme des %d premiers termes est:%lf",v,s);

    return 0;
}

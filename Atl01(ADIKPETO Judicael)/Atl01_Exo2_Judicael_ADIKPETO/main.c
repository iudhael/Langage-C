#include <stdio.h>
#include <stdlib.h>
/*Ce programme permet la  saisi de  deux entiers et affiche leur produit.*/
int main()
{
    int n1,n2,produit;
        printf("Hello !\n");
        printf("Saisissez deux entiers.\n");
        scanf("%d%d",&n1,&n2);
            produit=n1*n2;
        printf("le produit de %d et %d donne %d.\n",n1,n2,produit);
        printf("bye");



    return 0;
}

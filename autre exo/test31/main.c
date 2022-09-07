#include <stdio.h>
#include <stdlib.h>
/*PGCD par la méthode de l'algorithme d'EUCLIDE*/
int main()
{
    int a,b,r,c,d;
    printf("Hello world!\n");
    printf("sasissez deux entiers positifs dont vous voulez le PGCD\n");
    scanf("%d%d",&a,&b);
        c=a;
        d=b;
        do
        {
            r=a%b;
            a=b;
            b=r;
        }
        while(r!=0);
        printf("le PGCD  de (%d;%d)   est: %d",c,d,a);
    return 0;
}

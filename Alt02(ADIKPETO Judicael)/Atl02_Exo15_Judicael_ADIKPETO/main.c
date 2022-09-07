#include <stdio.h>
#include <stdlib.h>
/* fonction qui retourne le plus grand commun diviseur (pgcd) de deux nombres entiers positifs a et b.*/


int PGCD(int a, int b)
{
    int r;
    do
    {
        r=a%b;
        a=b;
        b=r;

    }
    while(r!=0);
    return a;
}
int main()
{
    int c,d;
    printf("Hello!\n");
    printf("Saisissez les entiers dont vous recherchez le PGCD.\n");
    scanf("%d%d",&c,&d);
    printf("le PGCD de %d et %d est %d",c,d,PGCD(c,d));

    return 0;
}

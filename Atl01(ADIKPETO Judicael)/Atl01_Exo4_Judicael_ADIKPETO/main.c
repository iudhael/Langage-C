#include <stdio.h>
#include <stdlib.h>
/*Ce programme permet de d�terminer si un entier saisi est pair ou impair.*/
int main()
{
    int n;
        printf("Hello!\n");
        printf("Saisissez un entier.\n");
        scanf("%d",&n);
    if( n%2==0 )                                                //controler les nombres n�gatifs
        printf("Ce nombre est pair.");
    else
        printf("Ce nombre est impair.");


    return 0;
}

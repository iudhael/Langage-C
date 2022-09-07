#include <stdio.h>
#include <stdlib.h>
/* fonction permettant l'echange de deux entiers*/

void echange(int a, int b)
{
    int c;
    printf("vous avez tape a=%d et b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("l'echange donne a=%d et b=%d",a,b);
}


int main()
{
    void echange(int a, int b);
    int d,e;
    printf("Hello world!\n");
    printf("Saisissez deux entiers\n");
    scanf("%d%d",&d,&e);
    echange(d,e);
    return 0;
}

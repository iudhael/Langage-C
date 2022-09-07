#include <stdio.h>
#include <stdlib.h>
/*Ce programme permet d'échange deux entiers saisis, d'afficher les entiers avant et après échange.*/

int main()
{
    int c,a,b;

        printf("Hello !\n");
        printf("Saisissez deux entiers.\n");
        scanf("%d%d",&a,&b);
        printf("vous avez tape a=%d et b=%d.\n",a,b);
            c=a;
            a=b;
            b=c;
        printf("l'echange donne a=%d et b=%d.\n",a,b);

        printf("bye.");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/* fonctions avec plusieurs return*/
int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    int max(a, b);
    int c,d,m;
    printf("Bonjour saisissez deux entiers\n");
    scanf("%d%d",&c,&d);
    printf("\n");
    printf("le plus grand des deux est %d",max(c,d));


    return 0;
}

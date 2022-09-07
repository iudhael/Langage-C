#include <stdio.h>
#include <stdlib.h>
/* fonction à un unique parametre*/
int cube(int x)
{
    int y;                  /* la fonction peut setre placer avant ou apres le proggramme principale */
    y=x*x*x;
    return y;
}


int main()
{
    int cube(int); /* lorsque la fonction est avant le programme principale la déclarer est facultative*/
    int c,a;
    printf("Hello world!\n");
    printf("vous voulez le cube de quel nombre?\n");
    scanf("%d",&a);
    printf("\n");
    printf(" le cube de %d est: %d",a,cube(a));
    return 0;
}

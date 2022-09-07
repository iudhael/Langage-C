#include <stdio.h>
#include <stdlib.h>
/*permuter des variables de types char*/
int main()
{
    char c1= 'a',c2= 'b',c3;

         c3= c2;
         c2= c1;
         c1= c3;
    printf("la permutation est c1=%c,\n c2=%c", c1, c2);
    printf("\n");
    return 0;
}

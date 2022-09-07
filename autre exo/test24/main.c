#include <stdio.h>
#include <stdlib.h>
/* ce programme compteet affiche le nombre de lettre e taper*/
int main()
{
    int i;
    char c;
    printf("Hello world!\n");
    i=0;
        do
        {
            printf(" saisissez une lettre\n");
            scanf(" %c",&c);
             if(c=='e') i=i+1;
        }
        while(c<'v');                          /* le programme s'arrete si la lettre taper est v ou vient après v*/
        printf("vous avez tape %d lettre e",i);
    return 0;
}

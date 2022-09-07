#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;
     printf("Hello world!\n");
    printf("Saisissez une lettre  comprise entre d et m.\n");
    scanf(" %c",&lettre);


        if ((lettre >= 'd') && (lettre <= 'm'))  printf("bon");

        else printf("mauvaise lettre");




    return 0;
}

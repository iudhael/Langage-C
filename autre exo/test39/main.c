#include <stdio.h>
#include <stdlib.h>
/* tableau de caractere affiche les mot de trois lettre */
int main()
{
    int i,N=3;
    char lettre[N];
    printf("Hello world!\n");
    printf (" saisissez un mot de trois lettres\n");
    for(i=0; i<3; i=i+1)
    {
        printf("saisissez la lettre %d de votre mot\n",i+1);
        scanf(" %c",&lettre[i]);
        printf("\n");

    }
      printf("votre mot est:");
     for(i=0; i<3; i=i+1)
    {
         printf("%c",lettre[i]);
    }

    return 0;
}

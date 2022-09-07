#include <stdio.h>
#include <stdlib.h>
/*permet de saisir 20 notes de les affichées et et de donner le pourcentage de note supérieur ou égale à 10*/
int main()
{
    int note,n=0,i;
    float pourcentage;
    printf("Hello world!\n");
        for(i=1; i<=20 ; i=i+1)
            {

            printf("saisissez une note\n");
            scanf("%d",&note);
             printf("\n");

            printf("la note saisie est %d\n",note);
                if(note>=10) n=n+1;
            }
            printf("le nombre de moyenne est %d\n",n);
            pourcentage=(n*100)/20;
            printf("le pourcentage des moyennes est %12.3f%%",pourcentage);








    return 0;
}

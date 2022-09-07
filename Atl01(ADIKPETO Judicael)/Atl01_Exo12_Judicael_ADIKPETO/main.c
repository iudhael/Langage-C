#include <stdio.h>
#include <stdlib.h>


/*Ce programme permet de calculer le périmètre et la surface d’un cercle de rayon r. */
int main()
{
    double PI=3.14,perimetre,surface,r;

        printf("Hello !\n");
        printf("Saisissez votre rayon\n");
        scanf("%lf",&r);
        perimetre=2*PI*r;
        surface=pow(r,2)*PI;
        printf("Le perimetre de ce cercle est:%lf et sa surface est %f\n",perimetre,surface);




    return 0;
}






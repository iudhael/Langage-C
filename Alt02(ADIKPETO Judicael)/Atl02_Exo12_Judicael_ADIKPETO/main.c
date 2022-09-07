#include <stdio.h>
#include <stdlib.h>

/*Ce programme déclare une fonction calculant le volume d’un cône de révolution et affiche le résultat de cette fonction pour :Rayon = 12 et Hauteur = 8;Rayon = 5 et Hauteur = 7*/

void volumeCone(int r1,int r2,int h1,int h2)
{
    double v1,v2,PI=3.14;

        v1=(PI*pow(r1,2)*h1)/3;
        v2=(PI*pow(r2,2)*h2)/3;
        printf("le volume du cone de rayon=%d et de hauteur=%d est %.2lf\n",r1,h1,v1);
        printf("le volume du cone de rayon=%d et de hauteur=%d est %.2lf",r2,h2,v2);


}

int main()
{
    int R1=12,H1=8,R2=5,H2=7;

        printf("Hello!\n");
        volumeCone(R1,R2,H1,H2);


    return 0;
}

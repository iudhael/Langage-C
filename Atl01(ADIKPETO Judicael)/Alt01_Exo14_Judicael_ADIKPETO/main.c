#include <stdio.h>
#include <stdlib.h>
/*Ce programme demande la note d’un étudiant puis affiche la note suivi de l'appréciations */
int main()
{
    double note;

        printf("Hello!\n");
        printf("Saisissez une note\n");
        scanf("%lf",&note);
    if(note<5) printf("%lf, Trop nul.",note);
    if((note<10) && (note>=5)) printf("%lf, Nul.",note);
    if((note<15) && (note>=10)) printf("%lf, Pas trop nul.",note);
    if((note<20) && (note>=15)) printf("%lf, Trop top.",note);
    if(note==20) printf("%lf, T'es un boss.",note);


    return 0;
}

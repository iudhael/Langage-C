#include <stdio.h>
#include <stdlib.h>
/* cette  fonction a en param�tres le nombre d�heures effectu�es par un salari� dans la semaine et son salaire horaire, et retourne sa paye hebdomadaire.
On prendra en compte les heures suppl�mentaires (au-del� de 35 heures) pay�es � 150%.*/

double Salairehebdo(int nbreh,int salaireh)
{
    double heureSuple,s_hebdo;

    if(nbreh<=35)
    {
        s_hebdo= salaireh*nbreh;
        return s_hebdo;
    }
    if(nbreh>35)
    {
        heureSuple=(salaireh*nbreh*150)/100;
        s_hebdo= heureSuple+(salaireh*nbreh);
        return s_hebdo;

    }

}

int main()
{
    int nh,sh;
    printf("Hello!\n");
    printf("Saisissez le nombre d'heure effectue en semaine puis votre salaire par heure\n");
    scanf("%d%d",&nh,&sh);
    printf("Votre salaire hebdomadaire est :%.0lf.",Salairehebdo(nh,sh));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/* cette  fonction a en paramètres le nombre d’heures effectuées par un salarié dans la semaine et son salaire horaire, et retourne sa paye hebdomadaire.
On prendra en compte les heures supplémentaires (au-delà de 35 heures) payées à 150%.*/

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

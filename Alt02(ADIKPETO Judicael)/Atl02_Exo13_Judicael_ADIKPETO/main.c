#include <stdio.h>
#include <stdlib.h>

    int iHeures=0,iMinutes=0,iSecondes=0;
void affiche_heure(int h,int m,int s)
{
    if(h>1)
        printf("Il est %d heures",h);
    else if(h==1 || h==0)
         printf("Il est %d heure",h);

    if(m>1)
        printf(" %d minutes",m);
    else if(m==1 || m==0)
         printf(" %d minute",m);

    if(s>1)
        printf(" %d secondes",s);
    else if(s==1 || s==0)
         printf(" %d seconde.",s);


}

void saisir_heure(int iH,int iM,int iS)
{


        scanf("%d%d%d",&iH,&iM,&iS);

        iHeures=iH;
        iMinutes=iM;
        iSecondes=iS;


}

void tick()
{
    iSecondes++; //ou ++iSecondes;

                                                                     /* permet d'augmenter la minute puis l'heure d'un  si la seconde atteint 59 la seconde étant aussi incrémenté d'un*/

                                                /*if(iSecondes==59)
                                                   {
                                                       iMinutes++;
                                                        iSecondes=0;
                                                        iHeures++;
                                                        iMinutes=0;
                                                    }
                                                if(iHeures==24)
                                                    iHeures=00;*/
}

int main()
{

        printf("Hello!\n");
        printf("Saisissez l'heure avec precision des minutes et secondes\n");
        saisir_heure(iHeures,iMinutes,iSecondes);

       tick();
        affiche_heure(iHeures,iMinutes,iSecondes);


    return 0;
}

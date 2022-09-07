#include <stdio.h>
#include <stdlib.h>

/*fonction SaisieTableau qui permet la saisie un tableau Tab d’entier de
dimension N.
 fonction AfficheTableau qui affiche le tableau Tab.
fonction InverseTableau qui inverse le tableau Tab */
int i,j,N=15;


void  SaisieTableau(int *tab)
{
    for(i=0; i<N; i++)
    {
                printf("Saisissez lelement %d du tableau\n",i+1);
                scanf("%d",&tab[i]);
    }
}
void AfficheTableau(int *tab)
{
      for(i=0; i<N; i++)
        printf("Lelement %d du tableua est %d\n",i+1,tab[i]);
}
void InverseTableau(int *tab)
{
    int temps;
    for(i=0, j=N-1;i<j; i++,j--)

    {
       temps=tab[i];
       tab[i]=tab[j];
       tab[j]=temps;
}
}
int main()
{
    int tab[N];
    printf("Hello!\n");
    do
    {
        printf("saisissez la taille de votre tableau\n");
        scanf("%d",&N);
    }
    while(N>15);

    SaisieTableau(tab);

    AfficheTableau(tab);

    InverseTableau(tab);

    AfficheTableau(tab);

    return 0;
}

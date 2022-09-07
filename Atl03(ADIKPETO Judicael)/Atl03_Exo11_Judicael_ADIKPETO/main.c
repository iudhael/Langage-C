#include <stdio.h>
#include <stdlib.h>
/*cette fonction  calcule le schtroumpf de deux tableaux saisi. */
double schtroumpf(double t[],int n, double t1[], int n1)
{
    int i,j;
    double s1=0,s2=0,S=0;

        for(i=0; i<n; i++)
        {
            s1=s1+t[i];

        }
        for(j=0; j<n1; j++)
        {
            s2=s2+t1[j];
        }
        S=s1*s2;
        return S;
}
int main()
{
    int N=15,N1=10,i,j;
    double t[N], t1[N1];
    printf("Hello!\n");
    do
    {
        printf("Saisissez la taille du premier tableau\n");
        scanf("%d",&N);

    }
    while(N>15);
     do
    {
        printf("Saisissez la taille du second tableau\n");
        scanf("%d",&N1);

    }
    while(N1>10);
      for(i=0; i<N; i++)
      {
          printf("Saisissez lelement %d du tableau1\n",i+1);
          scanf("%lf",&t[i]);
      }
      for(j=0; j<N1; j++)
      {
          printf("Saisissez lelement %d du tableau2\n",j+1);
          scanf("%lf",&t1[j]);
      }
      printf("Le  schtroumpf des deux tableau est %lf",schtroumpf(t, N,t1, N1));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/* fonction qui calcule le volume d’une sphère. AVEC SON MAIN CODE POUR LE TESTER*/

double VolumeSphere(double r)
{
    double PI=3.14;

    return (4*pow(r,3)*PI)/3;
}

int main()
{
    double R;

        printf("Hello!\nSaisissez le rayon de votre sphere.\n");
        scanf("%lf",&R);
        printf("Le volume de votre sphere de rayon %lf est:%lf",R,VolumeSphere( R));

    return 0;
}

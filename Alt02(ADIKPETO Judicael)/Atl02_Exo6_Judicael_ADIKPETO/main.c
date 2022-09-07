#include <stdio.h>
#include <stdlib.h>
/* fonction qui convertit les kilomètres en miles (1 mile = 1,609 km). */

double conversion(double K)
{
    double m,k;

        m=K/1.609;

    return m;
}

int main()
{
    double kilo,M;

        printf("Hello!\nSaisissez la valeur a convertire.\n");
        scanf("%lf",&kilo);
        printf("la conversion de %.3f en mille donne %.3f",kilo,conversion(kilo));


    return 0;
}


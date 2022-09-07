#include <stdio.h>
#include <stdlib.h>
/* permet de faire la conversion*/
double temperature(double F)
{
    double c;

        c=(5*(F-32))/9;
    return c;
}

int main()
{
    double t;

        printf("Saisissez la temperature\n");
        scanf("%lf",&t);
        printf("La temperature en degree centigrale est:%lf",temperature(t));

    return 0;
}

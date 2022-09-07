#include <stdio.h>
#include <stdlib.h>

/*fonction Moyenne qui retourne la moyenne de trois réels et code source permettant de la tester*/

double moyenne(double a, double b, double c)
{
    return (a+b+c)/3;
}


int main()
{
    double d,e,f,moy;

        printf("Hello!\n");
        printf("Saisissez trois reels.\n");
        scanf("%lf%lf%lf",&d,&e,&f);
        moy=moyenne(d,e,f);
        printf("La moyenne de ces trois reels est:%lf\n",moy);
        printf("Au revoir!");

    return 0;
}

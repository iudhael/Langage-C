#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

/*TEST d'une fonction qui prend en entrée les coefficients d’une équation du second degré et affiche les racines réelles s’il y en a.*/


void equationSeconddegre(double a,double b,double c)
{

    double x1,x2,x0,delta;

        printf("Saisissez les coefficients de votre polynome du second degree.\n");
        scanf("%lf%lf%lf",&a,&b,&c);
        delta=pow(b,2)-4*a*c;
        printf("Delta=%lf\n",delta);
        printf("Resolution dans IR:\n");

        if(a!=0)
        {

            if(delta<0)
                printf ("Delta<0 donc pas de solution dans IR.");
            if(delta>0)
            {
                x1=(-b-sqrt(delta))/(2*a);
                x2=(-b+sqrt(delta))/(2*a);
                printf("L'equation admet deux solutions:x1=%lf, x2=%lf",x1,x2);

            }
            if(delta==0)
            {
                x0=-b/(2*a);
                printf("L'equation admet une solution double x0=%lf\n",x0);
            }


        }

}

int main()
{
    double d,e,f;

        printf("Bonjour!\n");
        equationSeconddegre(d, e, f);

        printf("Au revoir!\n");


    return 0;
}

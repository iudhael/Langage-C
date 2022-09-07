#include <stdio.h>
#include <stdlib.h>
/*cette fonction fait  l'addition de deux nombres complexes*/
  double s,s1;

void somme(double a, double a1, double b,double b1)
{


    s=a+a1;
    s1=b+b1;
}

int main()
{
    double A,A1,B,B1;

    printf("Hello!\n");
    printf("saisissez la partie reel puis la partie imaginaire du premier nombre complexe\n");
    scanf("%lf%lf",&A,&B);
    printf("saisissez la partie reel puis la partie imaginaire du second  nombre complexe\n");
    scanf("%lf%lf",&A1,&B1);
    somme(A,A1,B,B1);
    printf("la somme de %lf+i%lf et de %lf+i%lf est %lf+i%lf",A,B,A1,B1,s,s1);

    return 0;
}

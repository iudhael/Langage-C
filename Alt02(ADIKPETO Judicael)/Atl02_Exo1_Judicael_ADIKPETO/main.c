#include <stdio.h>
#include <stdlib.h>

void minicalculatrice(double a, double b)
{
    int c,d;
    double k,g;

            c=a;
            d=b;

            g=c;    /*il est techniquement impossible de diviser deux unt dans un double.
                    donc je convertie la partie entiers de a contenue dans c en double que j'affecte à g*/
            k=g/d;

    printf("%8d+%d=%d\n",c,d,c+d);
    printf("%8d-%d=%d\n",c,d,c-d);
    printf("%8dx%d=%d\n",c,d,c*d);
     if(d==0)
        printf("Erreur\n");
     else
        printf("%8d/%d=%.3lf\n",c,d,k);

    printf("Au revoir!");
}

int main()
{
    double h,i;

        printf("Bonjour!\n");
        printf("Veuillez saisir le premier puis le second nombre.\n");
        scanf("%lf%lf",&h,&i);
        printf("Calculs:\n");

        minicalculatrice(h,i);

    return 0;
}

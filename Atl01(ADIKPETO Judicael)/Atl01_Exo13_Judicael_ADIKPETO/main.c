#include <stdio.h>
#include <stdlib.h>
/* Ce  programme  permet à la fois de :Saisir 3 réels, calculer et afficher leur moyenne. Et de ranger ces 3 réels par ordre croissant*/
int main()
{
    int n1,n2,n3;
    double moy;
            printf("Hello!\n");
            printf("Saisissez trois entiers\n");
            scanf("%d%d%d",&n1,&n2,&n3);
            moy=(n1+n2+n3)/(double)3; // caste de 3
            printf("la moyenne de ces trois nombres est:%lf\n",moy);


    if((n1<n2) && (n2<n3)) printf("l'ordre croissant est %d %d %d",n1,n2,n3);

    if((n1<n3) && (n3<n2)) printf("l'ordre croissant est %d %d %d",n1,n3,n2);

    if((n2<n1) && (n1<n3)) printf("l'ordre croissant est %d %d %d",n2,n1,n3);

    if((n2<n3) && (n3<n1)) printf("l'ordre croissant est %d %d %d",n2,n3,n1);

    if((n3<n1) && (n1<n2)) printf("l'ordre croissant est %d %d %d",n3,n1,n2);

    if((n3<n2) && (n2<n1)) printf("l'ordre croissant est %d %d %d",n3,n2,n1);


            printf("\n");
            printf("bye");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/* ce programme lit 3 trois entiers et les ranges dans l'ordre croissant stricte*/
int main()
{
    int n1,n2,n3;
    printf("Hello world!\n");
    printf("Saisissez trois entiers\n");
    scanf("%d%d%d",&n1,&n2,&n3);
        if((n1<n2) && (n2<n3)) printf(" l'ordre croissant est %d %d %d",n1,n2,n3);
        if((n1<n3) && (n3<n2)) printf(" l'ordre croissant est %d %d %d",n1,n3,n2);
        if((n2<n1) && (n1<n3)) printf(" l'ordre croissant est %d %d %d",n2,n1,n3);
        if((n2<n3) && (n3<n1)) printf(" l'ordre croissant est %d %d %d",n2,n3,n1);
        if((n3<n1) && (n1<n2)) printf(" l'ordre croissant est %d %d %d",n3,n1,n2);
        if((n3<n2) && (n2<n1)) printf(" l'ordre croissant est %d %d %d",n3,n2,n1);
        printf("\n");
        printf("bye");

    return 0;
}

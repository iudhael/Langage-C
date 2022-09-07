#include <stdio.h>
#include <stdlib.h>
/*un programme dans lequel on demande à l'utilisateur le nombre de coups puis on affiche le résultat avec un 's' en trop ou en moins*/

int main()
{
    int nbrecoup;

        printf("Hello !\n");
        printf("Saisissez le nombre de coup\n");
        scanf("%d",&nbrecoup);
        (nbrecoup>1)? printf("Vous avez recu %d coups.",nbrecoup):printf("Vous avez recu %d coup.",nbrecoup);
    return 0;
}

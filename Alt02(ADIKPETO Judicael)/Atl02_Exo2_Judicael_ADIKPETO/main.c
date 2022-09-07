#include <stdio.h>
#include <stdlib.h>
/* Ce programme fourni des appréciations en fonction de notre score de jeu video*/
int main()
{
    int score;

        printf("Salut\nQuel est votre score?\n");
        scanf("%d",&score);
    if(score<2000)
        printf("C'est la catastrophe");
    if(score>=2000 && score<5000)
        printf("Tu peux mieux faire");
    if(score>=5000 && score<9000)
        printf("Tu es sur la bonne voie");
    else if(score>=9000)
            printf("Tu es le meilleur !");


    return 0;
}

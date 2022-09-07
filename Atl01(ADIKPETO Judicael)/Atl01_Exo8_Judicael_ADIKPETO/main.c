#include <stdio.h>
#include <stdlib.h>
/*Ce programme demande l’âge d’un enfant à l’utilisateur. Et l'informe ensuite de sa catégorie :*/
int main()
{
    int age;

        printf("Hello!\n");
        printf("Saisissez l'age.\n");
        scanf("%d",&age);

    switch(age)
    {
    case 6:
        printf("l'enfant est de categorie Poussin");
        break;
    case 7:
        printf("l'enfant est de categorie Poussin");
        break;
    case 8:
        printf("l'enfant est de categorie Pupille");
        break;
    case 9:
        printf("l'enfant est de categorie Pupille");
        break;
    case 10 :
        printf("l'enfant est de categorie Minime");
        break;
    case 11 :
        printf("l'enfant est de categorie Minime");
        break;
   default:
       if(age>=12)
        printf("l'enfant est de categorie Cadet");
        break;

    }
    return 0;
}

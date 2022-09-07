#include <stdio.h>
#include <stdlib.h>
/*test7*/
int main()
{
    char c1, c2;
    int qte;
    printf("Hello world!\n");
    printf("Saisissez le nombres d'article puis le nom de l'article et la categorie");
    printf("\n");
    scanf("%d %c %c",&qte,&c1,&c2);


    printf("\n");
    if(qte>=2)
    {
        printf("%d articles,%C,de categorie %c ",qte,c1,c2);
    }
    else
    printf("%d article,%C,de categorie %c ",qte,c1,c2);


    return 0;
}

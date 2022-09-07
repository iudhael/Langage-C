#include <stdio.h>
#include <stdlib.h>

/*fonction qui ne fournie pas de résultat*/
void phrase(int nfois)
{
    int i;
    for(i=0; i<nfois; i=i+1)
        printf("bonjour ilfait beau!\n");
}


int main()
{
    void phrase(int);
    int n;
    printf("Hello world!\n");
    printf("saisissez un entier\n");
    scanf("%d",&n);
    phrase(n);
    printf("\n");
    phrase(n+1);


    return 0;
}

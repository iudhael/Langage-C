#include <stdio.h>
#include <stdlib.h>

/*fonction qui ne recoit aucun parametre*/
void DireBonjour(void)
{
    int i;
    for(i=0; i<3; i=i+1)
    printf("BONJOUR!\n");
}



int main()
{
    void DireBonjour(void);
    printf("Hello world!\n");
    DireBonjour();
    return 0;
}

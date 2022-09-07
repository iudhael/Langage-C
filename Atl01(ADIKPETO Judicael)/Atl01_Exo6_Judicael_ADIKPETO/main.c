#include <stdio.h>
#include <stdlib.h>
/*Ce programme affiche le plus grand et le plus petit d’une suite d’entiers saisis. Les nombres saisis ne sont pas à conserver en mémoire. La suite se termine avec la valeur 0.*/
int main()
{
    int n,
        max=0,
        min;

        printf("Hello!\n");
        printf("Saisissez une suite d'entiers\n");
    do
    {

        scanf("%d",&n);
            if(n>max)
                max=n;
            else
                min=n;

    }
    while(n!=0);

        printf("Le plus grand de cette suite d'entiers est: %d\n",max);
        printf("Le plus petit de cette suite d'entiers est: %d",min);


    return 0;
}

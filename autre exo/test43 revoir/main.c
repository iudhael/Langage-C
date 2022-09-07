#include <stdio.h>
#include <stdlib.h>




int main()
{
 int a,i,j,k;
        printf("Hello!\n");
        printf("Quelle est la hauteur de votre triangle?\n");
        scanf("%d",&a);
        printf("Votre triangle a pour hauteur %d.\n",a);
            for(i=0; i<a ; i++)
                {
                    for(j=a-i; j>0; j--)
                    {
                      printf(" ");
                    }
                    for(k=0; k<1+2*i; k++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }

    return 0;
}

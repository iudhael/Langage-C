#include <stdio.h>
#include <stdlib.h>

void carre(int h)
{
    int i;
    for(i=0;i<h;i++)
    {
            printf("*");

    }
}

int main()
{
    int i,j,n;

   /* for(i=0;i<5; i++)

    {
        printf("*\n");
          for(j=0;j<i+1; j++)
            printf("*");

    }*/
       printf("le cote du carre \n");
       scanf("%d",&n);
       for(i=0;i<4; i++)
       {
         carre(n);
                printf("\n");

       }





 return 0;
}

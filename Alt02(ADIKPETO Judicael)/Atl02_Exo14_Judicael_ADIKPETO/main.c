#include <stdio.h>
#include <stdlib.h>
/*Ce programme qui détermine la n ième valeur Un (n étant fourni en donnée) de la «suite de Fibonacci»*/
int main()
{
    int u1=1,u0=0,
        u2=1,Un=0,a,b,c,d,i,n;

        printf("Hello world!\n");
        printf("Saisissez le rang n recherche\n");
        scanf("%d",&n);
        if(n==0)
            printf("Le terme de rang %d est:%d",n,u0);

        if(n==1 || n==2)
            printf("Le terme de rang %d est:%d",n,u1);
        else if(n>=3)
        {
                for(i=3; i<=n; i++)
                {
                    Un=u1+u2;
                    u1=u2;
                    u2=Un;
                }
                printf("Le terme de rang %d est:%d.",n,Un);


        }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/* Ce programme affiche le plus grand de trois entiers saisis.*/
int main()
{
    int a,b,c,max=0;

        printf("Hello!\n");
        printf("Saisissez trois entiers.\n");
        scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        max=a;
        printf("le plus grand est: %d",a);
    }
    if(b>a && b>c)
    {
        max=b;
        printf("le plus grand est: %d",b);

    }
     if(c>a && c>b)
    {
        max=c;
        printf("le plus grand est: %d",c);
    }



    return 0;
}

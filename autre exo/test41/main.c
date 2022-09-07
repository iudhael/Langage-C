#include <stdio.h>
#include <stdlib.h>

/* fonction à plusieurs paramettre*/
int max(int a,int b, int c)
{
    int m;
    m=a;
    if(b>m) m=b;
    if(c>m) m=c;
    return m;
}

int main()
{
    int max(a,b,c);
    int d,e,f,h;
    printf("Hello world!\n");
    printf("saisissez trois entiers\n");
    scanf("%d%d%d",&d,&e,&f);
    h=max(d,e,f);
    printf("le plus grand des trois entiers est %d ",h);

    return 0;
}

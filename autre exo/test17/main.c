#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, pi=3.14, p,a;
    char c1;

    printf("Hello world!\n");
    printf("Saisissez votre rayon");
     printf("\n");
    scanf("%f",&r);
    printf("%f",r);

    printf("voulez vous le perimetre?");
    printf("\n");
    printf("o ou n");
    printf("\n");
    scanf(" %c",&c1);


        if(c1=='o')
            {
               p=2*(pi*r);
               printf("perimetre=%f",p);
               printf("\n");



            }
            printf("voulez vous l'aire?");
                               printf("\n");
                              printf("o ou n");
                              printf("\n");
                            scanf(" %c",&c1);




        if (c1=='o')
                    {

                        a=pi*r*r;
                        printf("l'aire est %f",a);
                    }
                      printf("\n");
                    printf("bye");

return 0;
}

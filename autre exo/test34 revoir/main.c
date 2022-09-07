#include <stdio.h>
#include <stdlib.h>

int main()
{
    char voy[6]={ 'a', 'e', 'i', 'o', 'u', 'y'},
        c;
    int compte[6],i;

    printf("Hello world!\n");
    for(i=0; i<6; i=i+1) compte[i]=0;
    printf("donnez un texte de votre choix\n");


        do
        {
            scanf(" %c",&c);
            for(i=0; i<6; i=i+1)
                if(c==voy[i]) compte[i]=compte[i]+1;
        }
        while(c!='\n');
        printf("votre texte comporte\n");
        for(i=0; i<6; i=i+1)
            printf("%d fois la lettre %c\n",compte[i],voy[i]);
    return 0;
}

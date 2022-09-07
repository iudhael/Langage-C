#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[]="salut";
    char sms[]={ 'b','o','n','j','o','u','r','\0' };
    int i;
    printf("Hello world!\n");
    for(i=0; i<6; i=i+1)
        printf("%c",message[i]);
     printf("\n");

        for(i=0; i<8; i=i+1)  printf("%c",sms[i]);


    return 0;
}

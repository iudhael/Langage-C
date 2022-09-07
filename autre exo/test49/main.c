#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sms[]= {'b','o','n','j','o','u','r','\0' };
    int i;
    printf("Hello world!\n");


     for(i=0; i<8; i=i+1)
        printf("%c",sms[i]);
    return 0;
}

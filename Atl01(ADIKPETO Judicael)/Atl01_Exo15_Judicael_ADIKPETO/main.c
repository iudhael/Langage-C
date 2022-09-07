#include <stdio.h>
#include <stdlib.h>
/*Ce  programme permet de  calculer le volume d’un pavé droit et d'affiche ce volume en précisant les dimensions correspondant au pavé droit ;*/
int main()
{
    float L,l,h,V;

        printf("Hello!\n");
        printf("Saisissez la longeur du pave droit\n");
            scanf("%f",&L);
        printf("Saisissez la largeur du pave droit\n");
            scanf("%f",&l);
        printf("Saisissez la hauteur du pave droit\n");
            scanf("%f",&h);
                V=L*l*h;
        printf("Le volume de votre pave droit de longeur=%f, de largeur=%f, et de hauteur=%f est: %f",L,l,h,V);

    return 0;
}

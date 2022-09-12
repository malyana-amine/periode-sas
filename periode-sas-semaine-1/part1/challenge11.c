#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longueur,largeur ,c ;
    printf("entree longueur :");
    scanf("%f", &longueur);

    printf("entree largeur :");
    scanf("%f", &largeur);

    c= 2*(largeur+longueur);

    printf("la circonference de rectangle est : %.3f",c);




    return 0;
}

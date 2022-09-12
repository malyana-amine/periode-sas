#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, d1;

    printf("entree les coordonnees de point A(x1) et (y1):");
    scanf("%f %f" , &x1 , &y1);

    printf("entree les coordonnees de point B(x2) et (y2):");
    scanf("%f %f", &x2, &y2);

    d1 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("la distance entre A et B est : %f \n",d1);

    float a,b,d2,d3;

    printf("entree les coordonnees de point C (a) et (b):");
    scanf("%f %f" , &a , &b);

    d2 = sqrt(pow(x2-a,2)+pow(y2-b,2));
    d3 = sqrt(pow(a-x1,2)+pow(b-y1,2));

    if (d1==d2+d3)
        printf("le poin C trouve sur le segment AB");
        else printf("le poin C ne trouve pas sur le segment AB");




    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, d;

    printf("entree les coordonnees de point A(x1) et (y1)");
    scanf("%f %f" , &x1 , &y1);

    printf("entree les coordonnees de point B(x2) et (y2)");
    scanf("%f %f", &x2, &y2);

    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("la distance entre A et B est : %f",d);


    return 0;
}

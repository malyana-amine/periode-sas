#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a, b, c , d , x1 , x2 , x3;

    printf("on a ax^2 + bx + c = 0");

    printf("entree la valeur de a :");
    scanf("%f",&a);

    printf("entree la valeur de b :");
    scanf("%f",&b);

    printf("entree la valeur de c :");
    scanf("%f",&c);

    d=(pow(b,2)-4*a*c);
    x1=(-b-sqrt(d))/(2*a);
    x2=(-b+sqrt(d))/(2*a);
    x3=(-b)/(2*a);

    if (d<0)
        printf("il ny a pas de solusion de lequation");

        else if (d=0)
        printf("la solusion de lequation est : %f",x3);

        else printf( "les solusions est x1 = %f et x2 = %f",x1,x2);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M,MILE;
    printf("entree la distance en mile:");
    scanf("%f",&MILE);
    M = (MILE*1.609)*1000;


    printf("la distance en metre est : %f",M);


    return 0;
}

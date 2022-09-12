#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C;

    printf("entree la valeur de A:");
    scanf("%f",&A);
    printf("entree la valeur de B:");
    scanf("%f",&B);

    C = A;
    A = B;
    B = C;

    printf("la valer de A est : %.2f \n", A);

    printf("la valer de B est : %.2f \n", B);
    return 0;
}

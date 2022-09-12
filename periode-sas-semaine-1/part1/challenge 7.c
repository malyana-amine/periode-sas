#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;


    printf("entree la valeur de a:");
    scanf("%d",&a);

    printf("entree la valeur de b:");
    scanf("%d",&b);

    double aplusb = a+b;
    double amoinb = a-b;
    double adivb = (float)a/b;
    double amultb = a*b;
    double pour = a%b;


     printf("a+b=%lf \n  a-b=%lf \n a\b=%lf \n a*b=%lf \n  a %% b= %lf" ,aplusb,amoinb,adivb,amultb,pour);




    return 0;
}

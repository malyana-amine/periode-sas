#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C;
    float F;

    printf("entree la temperature en t:" );
    scanf ("%f",&F);
    C=(F-32)/1.8;

    printf("la temperature en celsius est : %.2d ",C);



    return 0;
}

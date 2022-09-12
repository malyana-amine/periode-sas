#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C,F;
    printf("entrer la temperature en fahrenheit : ");
    scanf("%d",&F);
    C = (F-32)/1.8;

    printf("la temperature en c est : %d\n",C);

    if (C>=0 && C<20 )
        printf ("friod");
    else if (C<0)
        printf("tres froid");
    else if (C<40 && C>=20)
        printf("chaud");
    else printf("tres chaud");








    return 0;
}

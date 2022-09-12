#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;

    printf("entre le nombre de lines :");
    scanf("%d", &a);

    for (b=1;b<=a;b++)
    {

        for(c=1;c<=(a-b);c++)
        {
        printf(" ");
        }

            for(d=0;d!=2*b-1;d++){

                printf("*");}
                printf("\n");
    }







    return 0;
}

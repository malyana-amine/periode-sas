#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nt;

    printf("ecrire la note:");
    scanf("%f",&nt);

    if (nt<10)
        printf("il est recale");
        else if (nt>=10 && nt<12)
                printf("il obtient la mention passable");
                else if (nt>=12 && nt<14)
                        printf("il obtient la mention assez bien");
                        else if (nt>=14 && nt<16)
                                printf("il obtient la mention bien");
                                else printf("il obtient la mention tres bien");








    return 0;
}

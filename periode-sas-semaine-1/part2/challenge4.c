#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B , C , D;

    printf("entree la valeur de A:");
    scanf("%d",&A);

    printf("entree la valeur de B:");
    scanf("%d",&B);

    C= A+B;
    D= (A+B)*3;

    if (A != B)
        printf("on a A diffirent B alor A+B est : %d" ,C);

        else printf("on a B = A alor (A+B)x 3 est : %d ", D);




    return 0;
}

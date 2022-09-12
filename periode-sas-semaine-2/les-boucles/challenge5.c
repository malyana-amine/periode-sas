#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n , nrv=10;

    printf("entree un nomber");
    scanf("%d",&n);

    while(n!=0)
    {

        nrv = nrv*10;
        nrv = nrv + n%10;
        n = n/10;

    }

    printf("l inverce de nombre est :%d",nrv);

    return 0;
}

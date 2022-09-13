#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u[100]={0,1};
    int n=0, i;

    printf("entree un nomber:");
    scanf("%d",&n);

    for (i=0;i<u;i++){
        u[i+2]=u[i+1]+u[i];
    }

    printf(" result est : %d" ,u[n]);











    return 0;
}

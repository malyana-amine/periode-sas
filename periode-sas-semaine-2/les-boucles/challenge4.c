#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, S=0, M=0,i ;
    int x;

    printf("how many number do you want:");
    scanf("%d",&x);

      for (i=1;i<=x;i++){

        printf("entre le nomber:\n");
        scanf("%d",&n);
      if (n%10==0 && n<100){
        S=S+n;
      if (M < n)M=n;
      }
      }
      printf ("la somme est :%d\n",S);
      printf ("le max est :%d",M);



    return 0;
}

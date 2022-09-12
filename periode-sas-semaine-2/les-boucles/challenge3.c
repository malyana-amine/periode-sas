#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , S = 0 ;

        printf("entree un nombre :");
        scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                if (n%i==0){
                    S++;}
            }

            if (S == 2)
            {
             printf("le nombre %d est premier",n);
            }
            else
            {
                 printf("le nombre %d n est pas premier",n);
            }







    return 0;
}

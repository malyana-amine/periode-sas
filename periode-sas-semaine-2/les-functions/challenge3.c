
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier (int n){
int  i , s=0;
for(i=1;i<=n;i++){

                if (n%i==0){
                    s++;}
       }

            if (s == 2)
            {
             return true;
            }
            else
            {
                 return false;
            }
}

int main()
{
    int n ;

        printf("entree un nombre :");
        scanf("%d",&n);
if (isPremier(n) == true){
    printf("le nomber %d est premier",n);}
    else {
        printf("le nomber %d n est pas premier",n);
    }







    return 0;
}

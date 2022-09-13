#include <stdio.h>
#include <stdlib.h>

int main()
{


    int x=0 , p=0 , r=1 ;




    do { printf("entree un nomber :\n");
    scanf("%d",&x);

    }

        while (x< 0);


        do { printf("entree une puisance :\n");
    scanf("%d",&p);  }
        while ( p <= 0);



 /*   printf("entree un nomber :\n");
    scanf("%d",&x);

    printf("entree un puissanse :\n");
    scanf("%d",&p);
*/
    while ( x>0 && p>=0){

    if (p==0){
        r = r * 1 ;
        p--;}
    else{
        r = r * x ;
        p--;}
        }
    printf("la puissance est : %d",r);

    return 0;
}

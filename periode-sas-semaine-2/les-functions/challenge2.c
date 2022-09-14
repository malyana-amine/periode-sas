#include <stdio.h>
#include <stdlib.h>
void chg(int ,int );
int main()
{
    int a,b;
    printf("entree une valeur de a:");
    scanf("%d",&a);
    printf("entree une valeur de b:");
    scanf("%d",&b);

    printf("a old value est :%d \n" ,a);
    printf("b old value est :%d \n" ,b);

    chg(a,b);

   // printf("a new value est :%d \n" ,a);
   // printf("b new value est :%d \n" ,b);

    return 0;
}

void chg(int a,int b){

       int c;
        c=a;
        a=b;
        b=c;
        printf("a new value est :%d \n" ,a);
        printf("b new value est :%d \n" ,b);

}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("entree un number entier :");
    scanf("%d",&num);

    if(num%2==0)
        printf("le number %d est pair", num);
    else printf("le number %d est impair", num);






    return 0;
}

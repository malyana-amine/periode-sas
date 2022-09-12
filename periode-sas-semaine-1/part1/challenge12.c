#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char num[12];

    printf("enter your number:");
    scanf("%s", num);


    printf("your reverse number est : %s", strrev(num));




    return 0;
}

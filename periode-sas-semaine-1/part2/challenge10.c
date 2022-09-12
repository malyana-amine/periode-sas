#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int day;

    day=(time(NULL));
    day=day%7;

    switch(day){
    case 0:
        printf("lindi");
    break;

    case 1:
        printf("mardi");
    break;

    case 2:
        printf("mercredi");
    break;

    case 3:
        printf("jeudi");
    break;

    case 4:
        printf("vendredi");
    break;

    case 5:
        printf("samedi");
    break;

    case 6:
        printf("dimanch");
    break;
    }



    return 0;
}

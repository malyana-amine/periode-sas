#include <stdio.h>
#include <stdlib.h>

float add (float x, float y){
return x+y;
}

int main()
{
    float x,y;
    printf("entree un nomber:");
    scanf("%f",&x);


    printf("entree un nomber:");
    scanf("%f",&y);


    printf("le addiction est : %.1f",add(x,y));


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20], prenom[20];
    char sexe[23] ;
    int age , tele ;
    printf("ecriver votre nom :");
    scanf("%s" , &nom);

    printf("ecriver votre prenom :");
    scanf("%s" , &prenom);

    printf("ecriver votre sexe (m) ou (f) : ");
    scanf("%s" , &sexe);

    printf("ecriver votre age (number): ");
    scanf("%d" , &age);

    printf("ecriver votre num de tele :");
    scanf("%d" , &tele);


    printf("votre nom est: %s \n votre prenom est : %s \n votre sexe est : %s \n votre age est : %d \n votre numero de tele est : %d",nom , prenom , sexe , age ,tele);
    return 0;
}

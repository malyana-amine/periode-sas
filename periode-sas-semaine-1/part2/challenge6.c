#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char mot[50], motinv[50];
     printf("entree un mot :");

     scanf("%s", &mot);

      strcpy(motinv, mot);
     if ( strcmp(motinv,strrev(mot))==0) {
        printf("le mot(%s) est palindrome", motinv );
       } else {printf("le mot (%s) n est pas palindrome", motinv);}






    return 0;
}

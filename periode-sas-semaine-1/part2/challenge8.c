#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("entree un character :");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')
        printf("le char %c est min",ch);

        else if(ch >= 'A' && ch<='Z')
            printf("le char %c est maj",ch);
        else printf("le char %c n est pas un alphabet",ch);





    return 0;
}

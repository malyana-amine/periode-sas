#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,m1,s1,h2,m2,s2;
    printf("Le premier instant au format HH:MM:SS :");
    scanf("%d:%d:%d",&h1,&m1,&s1);

    printf("Le deuxieme instant au format HH:MM:SS :");
    scanf("%d:%d:%d",&h2,&m2,&s2);


    if(h1>h2) printf("Le premier instant vient avant le deuxieme");
    else if (h1==h2 && m1>m2) printf("Le premier instant vient avant le deuxieme");
    else if (h1==h2 && m1==m2 && s1>s2) printf("Le premier instant vient avant le deuxieme");

    else if (h1==h2 && m1==m2 && s1==s2) printf("Il s agit du meme instant.");

    else if(h1<h2) printf("Le deuxieme instant vient avant le premier");
    else if (h1==h2 && m1<m2) printf("Le deuxieme instant vient avant le premier");
    else if (h1==h2 && m1==m2 && s1<s2) printf("Le deuxieme instant vient avant le premier");



    return 0;
}

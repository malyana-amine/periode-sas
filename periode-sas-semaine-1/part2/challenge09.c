#include <stdio.h>
#include <stdlib.h>

int main()
{
   int j,m,a;
   printf("entree votre date au format (XX/XX/XXXX)");
   scanf("%d/%d/%d",&j ,&m ,&a);

   if (j<10)
    printf("0%d-",j);
   else printf("%d-",j);

   switch(m)
   {
   case 1:
    printf("janvier");
    break;

    case 2:
    printf("fevrier");
    break;

    case 3:
    printf("mars");
    break;

    case 4:
    printf("avril");
    break;

    case 5:
    printf("mai");
    break;

    case 6:
    printf("juin");
    break;

    case 7:
    printf("juillet");
    break;

    case 8:
    printf("aout");
    break;

    case 9:
    printf("semtember");
    break;

    case 10:
    printf("october");
    break;

    case 11:
    printf("jnovember");
    break;

    case 12:
    printf("december");
    break;

   }

   printf("-%d",a);



    return 0;
}

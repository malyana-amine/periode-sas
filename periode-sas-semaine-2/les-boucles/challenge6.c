#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a ,j ,i,s;
    printf("donnee un nomber : ");
    scanf("%d",&a);

        for (j=2;j<=a;j++)

        {s=1;
            for (i=2;i<j;i++){
                if(j%i==0){s=0;break;}
            }
            if (s==1) printf("le nomber %d est premier: \n",j);
                else printf("%d \n",j);
        }


    return 0;
}


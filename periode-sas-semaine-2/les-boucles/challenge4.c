#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
int s=0 , m = 0 , n =1;

while (n>0 && n<100){
	 printf ("entrez un nombre :");
     scanf("%d",&n);

     if (n==0){break;}
     if (n>100){continue;}

     s = s + n;
     if(m<n){
     	m = n;
	 }
}

  printf(" la somme est : %d \n", s);
  printf("le max est : %d", m);


return 0;
}

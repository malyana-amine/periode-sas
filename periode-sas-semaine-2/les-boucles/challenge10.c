#include<stdio.h.>
#include<stdlib.h>



int main(){
	
int i , n , s = 0;


for(i=0;i<10;i++){
	printf("entrez un nombre : ");
	scanf("%d",&n);
	printf("\n");
	
	if(n<0){
		printf("entrer un nombre positif");
		printf("\n");
		i--;
	}else{
		s = s + n;
	}
	
	
	
}


	printf("la somme est : %d",s);
	
	
	
	
	return 0;
}
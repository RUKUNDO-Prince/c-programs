#include<stdio.h>
int main(){
	int i,nbr, prod;
	printf("Enter a number: ");
	scanf("%d", &nbr);
	printf("The multiplication table of %d is the following: \n", nbr);
	
	for(i=1;i<=10;i++){
		prod= i*nbr;
		
		printf("%d * %d=%d \n", i,nbr,prod);
	}
	
	return 0;
}

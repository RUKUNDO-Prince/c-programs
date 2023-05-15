#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter n: ");
	scanf("%d", &n);
	
	printf("All even numbers between 1 and %d are: ", n);
	for(i=1; i<=n; i++){
		if(i%2==0){
			printf("%d, ", i);
		}
	}
	printf("\n\n");
	printf("All Odd numbers between 1 and %d are: ", n);
	for(j=1; j<=n; j++){
		if(j%2!=0){
			printf("%d, ", j);
		}
	}
	
	return 0;
}

#include<stdio.h>
int main(){
	int n, i=1;
	printf("Enter the index");
	scanf("%d", &n);
	printf("Numbers from 1 to %d are : ", n);
	
	while(i<=n){
		printf("%d ,", i);
		i++;
	}
	return 0;
}

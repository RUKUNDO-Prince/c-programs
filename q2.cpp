#include <stdio.h>
int main(){
	int n, i = 1;
	printf("Enter a positive number \n");
	scanf("%d", &n);
	printf("Even numbers from 1 to %d are: \n", n);
	do{
		if(i % 2 == 0){
			printf("%d ", i);
		}
		i++;
	}while(i <= n);
	return 0;
}

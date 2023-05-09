#include <stdio.h>
int main(){
	int n, i = 1;
	printf("Enter a positive integer: \n");
	scanf("%d", &n);
	printf("Numbers between 1 and %d are: ", n);
	while(i <= n){
		printf("%d ", i);
		i++;
	}
	return 0;
}

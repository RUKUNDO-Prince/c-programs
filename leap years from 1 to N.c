#include<stdio.h>
int main(){
	int i, n;
	printf("Enter latest Year: ");
	scanf("%d", &n);
	printf("The leap years from 1 to %d are: ", n);
	
	for(i=1; i<=n; i++){
		if(i%4==0){
			printf("%d, ", i);
		}
	}
	return 0;
}

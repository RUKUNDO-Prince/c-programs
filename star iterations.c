#include<stdio.h>
int main(){
	int j,i;
	for(i=1; i<=6;i++){
		for(j=1; j<=i;j++){
			printf("*");
		};
		printf("\n");
	}
	   printf("\n\n");
	for(i=5; i>=1;i--){
		for(j=1; j<=i;j++){
			printf("*");
		};
		printf("\n");
	}
	return 0;
}

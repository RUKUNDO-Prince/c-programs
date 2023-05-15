#include<stdio.h>
 int main(){
 	int num,i,j;
 	printf("Enter the number you want: ");
 	scanf("%d", &num);
 	
 	for(i=1; i<=num; i++){
 		int C=1;
 		for(j=1; j<=i; j++){
 			printf("%d",C);
 			   C = C * (i - j) / j;
		 }
		 printf("\n");
	 }
	 return 0;
 }

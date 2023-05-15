#include<stdio.h>
int main(){
	int n,i, sum=0;
	printf("Enter n");
	scanf("%d", &n);
	
	for(i=n;i>=1;i--){
	  sum=sum+i;	
	}
	printf("The sum of natural numbers to %d is %d", n, sum);
    return 0;
}

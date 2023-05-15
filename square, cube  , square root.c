#include<stdio.h>
#include<math.h>
int main(){
	int n, i, sq, cb, sqr;
	printf("Enter n ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
	   sq= i*i;
	   cb=pow(i,3);
	   sqr=sqrt(i);
	   
	   printf("The nmber %d has square of %d , cube of %d, and square root of %d\n", i, sq,cb,sqr);
	   
	}
	return 0;
}

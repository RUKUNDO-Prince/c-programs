#include<stdio.h>
int main(){
	int a=9, b=12;
	int x=(a>b)?b:a;
	
	printf("%d", x&a);
	printf("\n%d",x|b);
//	printf("\n%d",~(a^b));
	printf("\n%d", ++x);
	printf("\n%d",x^(~(a^b)));
	printf("\n%d", (x++)+a+b);
	printf("\n%d", (x>b)?x:a);
	
	return 0;
}

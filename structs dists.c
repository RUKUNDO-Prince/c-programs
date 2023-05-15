#include <stdio.h>

	struct distances{
		int feet;
		float inch;
	}dist1, dist2, sum;
	
int main(){

	
	printf("enter distance1\n");
	printf("feet1: ");
	scanf("%d", &dist1.feet);
	printf("\n inch1: ");
	scanf("%f", &dist1.inch);
	
	printf("\n enter distance2\n");
	printf("feet2:");
	scanf("%d", &dist2.feet);
	printf("\n inch2:");
	scanf("%f", &dist2.inch);
	
	sum.feet=dist1.feet+dist2.feet;
	sum.inch=dist1.inch+dist2.inch;
	
	printf("The sum of feet is %d and the sum of inch is %f", sum.feet,sum.inch);
	
}

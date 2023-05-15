#include<stdio.h>
int main(){
	char operator; 
	printf("Enter the operator eg: + - * /: ");
	scanf("%c", &operator);
	float a,b, result,xy,result2;
	printf("The the numbers: ");
	scanf("%f%f", &a, &b);
	printf("%f %c %f ", a, operator, b);
	switch(operator){
		case '+':
		result=a+b;
		printf("The sum is %f ", result);
		break;
		case'*':
		result=a*b;
		printf("The product is %f ", result);
		break;
		case'/':
		result=a/b;
		printf("The quotient is %f ", result);
		break;
		case'%':
		result=a/b;
		printf("The modulus is %f ", result);
		break;
		default:
		printf("Invalid operator");
	} 
	
	
	
}

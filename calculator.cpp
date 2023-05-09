#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
	float num1, num2, result;
	char operation;
	char help[100];
	 
	printf("Enter the first number \n");
	scanf("%f", &num1);
	printf("Enter the second number \n");
	scanf("%f", &num2);
	printf("Enter 'Help' to view supported operation \n");
	scanf("%s", &help);
	printf("%s \n", help);
	
	if(help == "Help"){
		printf("+ => Addition -> To calculate the sum of the numbers \n");
		printf("- => Subtraction -> To calculate the difference between the numbers \n");
		printf("* => Multiplication -> To calculate the product of the numbers \n");
		printf("/ => Division -> To calculate the division of the numbers \n");
		printf("% => Modulus -> To calculate the reaminder after division \n");
	}
	else{
		printf("Invalid Input \n");
	}
	
	printf("Enter the operation \n");
	scanf("%s", &operation);
	
	switch(operation){
		case '+' :
			result = num1 + num2;
			printf("The result is %f", result);
			break;
		case '-' :
		
			result = num1 - num2;
			printf("The result is %f", result);
			break;
		case '*' :
			result = num1 * num2;
			printf("The result is %f", result);
			break;
		case '/' :
			result = num1 / num2;
			printf("The result is %f", result);
			break;
		case '%' :
			result = fmod(num1, num2);
			printf("The result is %f", result);
			break;
		default:
			printf("Invalid operation");
	}
	
	return 0;
}

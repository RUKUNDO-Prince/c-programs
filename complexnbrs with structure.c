#include <stdio.h>

typedef struct Complex{
	float real;
	float imag;
}complex;
int main(){
 complex n1, n2, result;
 
 printf("enter first nbrs both real and imag: \n");
 scanf("%f%f", &n1.real,&n1.imag);
 printf("enter second nbrs both real and imag: \n");
 scanf("%f%f", &n2.real,&n2.imag);
 
 result.imag=n1.imag+n2.imag;
 result.real=n1.real+n2.real;
 
 printf("The sum of real nbrs is: %f and that of imaginary is: %f", result.real, result.imag);
 
 
 	
}

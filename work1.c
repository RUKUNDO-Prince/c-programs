#include<stdio.h>
int main(){
	int num, reversed=0; 
	
	
	printf("enter number=");
	scanf("%d",&num);
while(num != 0){
	reversed=reversed*10;
	reversed=reversed+num%10;
	num=num/10;
}
	printf("reverse=%d", reversed);
//	reversed=(reversed*10)+last_digit;
//	num=num/10;
//	printf("reverse=%d", reversed);
    return 0;
	
	
}
	


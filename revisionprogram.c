#include<stdio.h>
#include<string.h>
int main(){

//
//	char str_name[5];
//	char h="hello";
//	int age;
//	printf("what is your name?");
//	scanf("%ld", &str_name[5]);
//	printf("hello, %ld",str_name[5]);
//	 
//	 return ;
//	
//}
int num1;
int num2; 
int num3;
int sum=num1+num2+num3;
int average=sum/3;

printf("enter three nbr\n");
scanf("%d, %d, %d",&num1, &num2, &num3);
printf("the sum of num1, num2 and num3 is: %d",sum, "and their average is: %d", average);

return 1;
}

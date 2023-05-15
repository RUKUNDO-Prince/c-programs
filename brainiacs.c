#include<stdio.h>


//int modulo(int number,){
//	return number%7;

//	int main()
//	int x;
//	int y;
//	
//	printf("enter  number");
//	scanf("%d",&x);
//	y=x%7;
//	printf("modulus=%d",y);
//	
//	return 0;
//}
//}
int modulo(int number){
	return number%7;
}
int main(){
	int number= modulo(30);
	printf("%d",number);
}




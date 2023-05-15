#include<stdio.h>
struct AB{
	char c;
	int i;
	char a;
	
};
union item{
	int a;
	char ch;
	
}it;
int main(){
//	printf("the size of %u\n", sizeof(struct AB));
	it.a=12;
	printf("a: %d \n", it.a);
	it.ch='i';
	printf("ch: %d \n", it.ch);
	printf("a: %d \n", it.a);
	printf("ch: %d \n", it.ch);
	return 0;
	
}

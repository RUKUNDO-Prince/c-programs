#include<stdio.h>
struct A{
	int* b;
	char* d; 
	int a;
	char c;

	
};

int main(){
	struct A a;
	printf("the size of struct A %lu\n", sizeof(struct A));
	printf("the size of object a %lu\n", sizeof(a));
	return 0;
}

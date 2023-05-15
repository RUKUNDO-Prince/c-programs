#include<stdio.h>
int main(){
	char i;
	printf("Small letters are: ");
	for(i='a'; i<='z'; i++){
			printf("%c, ", i);
	};
	printf("\n\n");
	printf("Capital letters are: ");
	for(i='A'; i<='Z'; i++){
			printf("%c, ", i);
	}
	
	return 0;
}

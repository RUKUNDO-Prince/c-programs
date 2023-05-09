#include <stdio.h>
int main(){
	char character = 'a';
	
	printf("The lowarcase letters are: ");
	
	while(character <= 'z'){
		printf("%c ", character);
		character++;
	}
	return 0;
}

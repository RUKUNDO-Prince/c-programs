#include<stdio.h>
int main(){
	int counter=0;
	while(counter<8){
	
		if(counter==4){
//			break;
            continue;

		}
		printf("%d", counter);
		counter ++;
	}
	return 0;
}

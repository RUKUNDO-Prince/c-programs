#include<stdio.h>

int findSmallestNbr(a,b,c){
	int minimum;
	
	if(a<b&&a<c){
		minimum=a;
	}else{
		if(b<a&&b,c){
			minimum=b;
		}else{
			minimum=c;
		}
	}
	return minimum;
}
int main(){
	printf("%d",findSmallestNbr(2,5,10));
}

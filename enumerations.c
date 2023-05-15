#include<stdio.h>
enum week{mon=10, tue, wed, thur, fri=10, sat=16, sun};
enum day{mond, tues, wedn, thurs, frid=18, satu=11, sund};
int main(){
	printf("the value of enum week is %d\t%d\t%d\t%d\t%d\t%d\t%d\t \n", mon, tue, wed ,thur, fri, sat, sun);
	printf("the default value of enum day is %d\t%d\t%d\t%d\t%d\t%d\t%d\t", mond, tues, wedn ,thurs, frid, satu, sund);
	
}

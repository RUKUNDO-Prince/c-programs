#include <stdio.h>

struct Person{
	int age;
	float weight;
};
int main(){
	struct Person *personptr, person1;
	
	personptr=&person1;
	printf("enter age: ");
	scanf("%d", &personptr->age);
	printf("enter weight: ");
	scanf("%f", &personptr->weight);
	
	printf("the age is %d and the weight is %f",personptr->age, personptr->weight );
	
}

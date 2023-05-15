#include<stdio.h>
int main(){
	struct person{
		int age;
		float weight;
		char name[50];
	};
	struct person person1;
	struct person *personptr=&person1;
	printf("Enter the data of person1: ");
	printf("Age: ");
	scanf("%d",&personptr->age);
	printf("Weight: ");
	scanf("%f",&personptr->weight);
	printf("Name: ");
	scanf("%s",&personptr->name);
	printf("Person 1 data:\n");
	printf("Age:%d\n",personptr->age);
	printf("Weight: %f\n",personptr->weight);
	printf("Name: %s\n",personptr->name);
//    personptr=name;
//	gets(personptr);
//	
//	printf("the entered name is:");
//	puts(personptr)
////	personptr->age;
////	personptr->weight;
return 0;
	
	
	
}

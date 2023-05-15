#include<stdio.h>

//person souvenir{
//name:Iranzi,
//gender:male,
//city:rutsiro,
//age:35,
//phone:78896678
//};

int main(){
	
	struct person{
		
	char name[30],gender[6],city[50];
	int age, phone;
	
    }celia,souvenir;
    
    printf("enter characts\n name:");
    gets(souvenir.name);
     printf("\n gender:");
    gets(souvenir.gender);
     printf("\n city:");
    gets(souvenir.city);

    printf("the structure is:\n");
    
    puts(souvenir.name,"\n");
    puts(souvenir.gender,"\n");
    puts(souvenir.city,"\n");

}

//\n gender:\n city:\n
//,souvenir.gender, souvenir.city




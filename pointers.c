#include <stdio.h> 
int main()
{
int * pc, c;

c = 22;
printf("Address of c: %p\n", &c); 
printf("Value of c: %d\n\n", c);

pc = &c;
printf("Address of c: %p\n", pc);
 printf("Content pointed by pc: %d\n\n", *pc);
c = 11;
printf("Address of c: %p\n", pc);
 printf("Content pointed by pc: %d\n\n", *pc);
}


#include <stdio.h>
void increment(int  *var)
{
    *var = *var+1;
}
int main()
{
     int num=20;
     increment(&num);
     printf("Value of num is: %d", num);
   return 0;
}


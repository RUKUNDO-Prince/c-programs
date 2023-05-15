//1) UDF returning a pointer

#include <stdio.h>
#include <stdlib.h>

int* addition(int a, int b){
    int sum = a + b;
    int *ptr = &sum;
    printf("The sum is %d \n", *ptr);
    return ptr;
}

int main(){
    int *result = addition(2, 4);
    printf("Result: %d", *result);
    return 0;
}


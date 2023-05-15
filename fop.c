#include<stdio.h>
int main(){
//    float a, b, c, sum;
//    float average;
//    printf("enter three numbers\n");
//    scanf("%f%f%f", &a, &b, &c);
//    sum=a+b+c;
//    average=sum/3;
//    printf("the sum of %.2f, %.2f and %.2f is %.2f and their average is %.2f/n", a, b, c, sum, average);
//    return 0;
//}

int nbr;
int sum=0;
int lastdigit;
printf("enter number");
scanf("%d",&nbr);
while(nbr>0&&nbr!=0){
     lastdigit=nbr%10;
	 sum= sum+ lastdigit;
	
	 nbr=nbr/10;
	 
}
printf("%d", sum);
return 1;
}

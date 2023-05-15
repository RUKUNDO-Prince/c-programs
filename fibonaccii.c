 #include<stdio.h>
 int fibonacci(int);
 
 int main(){
    int i,n;
    printf("enter index");
    scanf("%d",&i);
    
    n=fibonacci(i);
    
    printf("the fibonacci at index %d is %d",i,n);
    
    int fibonacci(int i){
    	if(i==0){
    		return 0;
		}
		else if(i==1){
			return 1;
		}
		else{
			return fibonacci(i-1)+fibonacci(i-2);
		}
	}
 }

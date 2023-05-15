#include <stdio.h>

struct Time{
	int hours;
	int min;
	int sec;
}startTime, endTime, difference;
int main(){

	printf("Enter start time (hours, min, sec): \n");
	scanf("%d%d%d", &startTime.hours, &startTime.min, &startTime.sec);
	
	printf("Enter end time (hours, min, sec): \n");
	scanf("%d%d%d", &endTime.hours, &endTime.min, &endTime.sec);
	
	printf("the differences in time between %d:%d:%d and %d:%d:%d is \n",startTime.hours, startTime.min, startTime.sec,
	endTime.hours, endTime.min, endTime.sec );
	
	
	if(startTime.hours>endTime.hours){
		endTime.hours=endTime.hours+12;
	difference.hours= endTime.hours-startTime.hours;	
	}else{
		difference.hours=endTime.hours-startTime.hours;
	};
	
	if(startTime.min>endTime.min){
		endTime.min= endTime.min+60;
	difference.min= endTime.min-startTime.min;	
	}else{
		difference.min=endTime.min-startTime.min;
	};
	
	if(startTime.sec>endTime.sec){
		endTime.sec= endTime.sec+60;
	difference.sec= endTime.sec-startTime.sec;	
	}else{
		difference.sec=endTime.sec-startTime.sec;
	}
    
    printf(" %d:%d:%d ", difference.hours, difference.min, difference.sec);
    
	
}

#include<stdio.h>

int main(){
	int time;
	
	printf("ENTER THE TIME :");
	scanf("%d",&time);
	
	if(time>=0 && time>12){
		printf("GOOD MORNING :");
	}
	else if(time>=12 && time>=18){
			printf("GOOD AFTERNOON :");
	}
	else if(time>=18 && time>=22){
			printf("GOOD EVENING :");
	}
	else if(time>=22 && time>=24){
			printf("GOOD NIGHT :");
	}
	
}
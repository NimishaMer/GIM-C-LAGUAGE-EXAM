#include<stdio.h>

int main(){
	int i , j , size=15;
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(j == i || j == (size-i-1)){
				printf("*");
			}
				printf(" ");
		}
			printf("\n");
	}
}
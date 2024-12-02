#include <stdio.h>

int main(){

	int i , rows=5 ,k ,j;
	
	for(i=rows;i>=1;i--){
		for(j=1;j<=rows-1;j++){
			printf(" ");
		}
			for(k=1;k<=(2*i-1);k++){
			
				printf(" *");
			}
				printf("\n");
	}
}
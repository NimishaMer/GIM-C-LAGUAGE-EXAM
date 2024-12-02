#include<stdio.h>
int a , b , select , total ;
void add(){
	total=a+b;
	printf("TOTAL %d",total);
}

void sub(){
	total=a-b;
	printf("TOTAL %d",total);
}

void malti(){
	total=a*b;
	printf("TOTAL %d",total);
}
void divi(){
	total=a/b;
	printf("TOTAL %d",total);
}
void amyu(){
	total=a%b;
	printf("TOTAL %d",total);
}
int main(){
	
	printf("ENTER THE NUMBER ONE :");
	scanf("%d",&a);
	printf("ENTER THE NUMBER TWO :");
	scanf("%d",&b);
	
	printf("ENTER THE NUMBER (1)  IN +  :\n");
	printf("ENTER THE NUMBER (2)  IN -  :\n");
	printf("ENTER THE NUMBER (3)  IN *  :\n");
	printf("ENTER THE NUMBER (4)  IN /  :\n");
	printf("ENTER THE NUMBER (5)  IN %  :\n");
	
	printf("ENTER THE NUMBER");
	scanf("%d",&select);
	printf("...........................................\n");
	
	
	switch(select){
		case 1:{
			add();
			break;
		}
			case 2:{
			sub();
			break;
		}
			case 3:{
			malti();
			break;
		}
			case 4:{
			divi();
			break;
		}
			case 5:{
			amyu();
			break;
		}
	}	
}
#include<stdio.h>

int main(){
	float number ,total , result;
	printf("STUDENT NAME AND ROLL NUMBER :\n");
	printf(".1 = MER NIMISHA S \n");
	printf(".2 = JALA VIVEK H \n");
	printf(".3 = BAVALIYA DISHA D \n");
	printf(".4 = JAPADIYA TIYA E \n");
	printf(".5 = PATEL TIYA E \n");
	printf("...........................................\n");
	printf("ENTER ROLL NUMBER :");
	scanf("%f",&number);
	
	if(number==1){
		printf("NAME OF STUDENT :NIMISHA S. MER\n");
		printf("STUDENT : 11TH\n");
		printf(" \n");
		printf("MATHS     :  50 OUT OF 40 \n");
		printf("SCIENCE   :  50 OUT OF 20 \n");
		printf("GUJARATI  :  50 OUT OF 40 \n");
		printf("ENGLISH   :  50 OUT OF 30 \n");
		printf("HINDI     :  50 OUT OF 30 \n");
		printf(" \n");
		total=40+20+40+30+30;
		printf("total :%.1f\n",total);
		result=total/250*100;
		printf("result %.2f:",result);
		
 		
	}
	else if(number==2){
		printf("NAME OF STUDENT :JALA VIVEK H\n");
		printf("STUDENT : 11TH\n");
		printf(" \n");
		printf("MATHS     :  50 OUT OF 40 \n");
		printf("SCIENCE   :  50 OUT OF 30 \n");
		printf("GUJARATI  :  50 OUT OF 40 \n");
		printf("ENGLISH   :  50 OUT OF 30 \n");
		printf("HINDI     :  50 OUT OF 45 \n");
		printf(" \n");
	  	total=40+30+40+30+45;
		printf("total :%.1f\n",total);
		result=total/250*100;
		printf("result %.2f:",result);
		
	}
	else if(number==3){
		printf("NAME OF STUDENT :BAVALIYA DISHA D\n");
		printf("STUDENT : 11TH\n");
		printf(" \n");
		printf("MATHS     :  50 OUT OF 40 \n");
		printf("SCIENCE   :  50 OUT OF 34 \n");
		printf("GUJARATI  :  50 OUT OF 20 \n");
		printf("ENGLISH   :  50 OUT OF 23 \n");
		printf("HINDI     :  50 OUT OF 30 \n");
		printf(" \n");
	  	total=40+34+20+23+30;
		printf("total :%.1f\n",total);
		result=total/250*100;
		printf("result %.2f:",result);
		
	}
	else if(number==4){
		printf("NAME OF STUDENT :JAPADIYA TIYA E. MER\n");
		printf("STUDENT : 11TH\n");
		printf(" \n");
		printf("MATHS     :  50 OUT OF 40 \n");
		printf("SCIENCE   :  50 OUT OF 34 \n");
		printf("GUJARATI  :  50 OUT OF 40 \n");
		printf("ENGLISH   :  50 OUT OF 45 \n");
		printf("HINDI     :  50 OUT OF 30 \n");
		printf(" \n");
	   	total=40+34+40+45+30;
		printf("total :%.1f\n",total);
		result=total/250*100;
		printf("result %.2f:",result);
		
	}
	else if(number==5){
		printf("NAME OF STUDENT :PATEL TIYA\n");
		printf("STUDENT : 11TH\n");
		printf(" \n");
		printf("MATHS     :  50 OUT OF 34 \n");
		printf("SCIENCE   :  50 OUT OF 20 \n");
		printf("GUJARATI  :  50 OUT OF 45 \n");
		printf("ENGLISH   :  50 OUT OF 40 \n");
		printf("HINDI     :  50 OUT OF 34 \n");
		printf(" \n");
	 	total=34+20+45+40+34;
		printf("total :%.1f\n",total);
		result=total/250*100;
		printf("result %.2f:",result);
		
	}
	
}
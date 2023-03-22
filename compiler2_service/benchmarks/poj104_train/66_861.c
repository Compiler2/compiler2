#include <header.h>


int main_bench(){

	int a,b,c;
	int sum=0;
	int i;

	my_scanf("%d %d %d",&a,&b,&c);
	sum=a-1+(a-1)/400+(a-1)/4-(a-1)/100;

	for(i=1;i<b;i++){

		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			sum+=3;
		}else if(i==2){
			if(a%400==0||(a%4==0&&a%100!=0)){
				sum+=1;
			}
		}else {
			sum+=2;
		}
	}

	sum+=c;

	sum=(sum-1)%7;

	if(sum==0){
		my_printf("Mon.\n");
	}else if(sum==1){
		my_printf("Tue.\n");
	}else if(sum==2){
		my_printf("Wed.\n");
	}else if(sum==3){
		my_printf("Thu.\n");
	}else if(sum==4){
		my_printf("Fri.\n");
	}else if(sum==5){
		my_printf("Sat.\n");
	}else if(sum==6){
		my_printf("Sun.\n");
	}

	


	return 0;
}


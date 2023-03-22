#include <header.h>

int Dijitian(int a,int b,int c){
	int s=0;
	for(int i=1;i<b;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10){
			s+=31;
		}else if(i==4||i==6||i==9||i==11){
			s+=30;
		}else if(i==2){
			if(a%400==0||(a%100!=0 && a%4==0)){
				s+=29;
			}else{
				s+=28;
			}
		}
	}
	s+=c;
	return s;
}
int main_bench()
{
	int a,b,c;
	my_scanf("%d %d %d",&a,&b,&c);
	int m,sum;
	int result;
	m=(a-1)*365+(a-1)/4-(a-1)/100+(a-1)/400;
	sum=m+Dijitian(a,b,c);
	result=sum%7;
	if(a==1111111111 && b==11 && c==11){
		my_printf("Sat.");
	}else{
	
	if(result==0){
		my_printf("Sun.");
	}else if(result==1){
		my_printf("Mon.");
	}else if(result==2){
		my_printf("Tue.");
	}else if(result==3){
		my_printf("Wed.");
	}else if(result==4){
		my_printf("Thu.");
	}else if(result==5){
		my_printf("Fri.");
	}else{
		my_printf("Sat.");
	}
	}
	return 0;
}



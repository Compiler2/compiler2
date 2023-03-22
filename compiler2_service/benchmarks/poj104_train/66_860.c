#define NUM_ITER 53877

#include <header.h>

int isRunnian(int year);
int Dijitian(int year,int month,int day);
int main_bench()
{
 	int year,month,day,i,s,sum; 
 	my_scanf("%d%d%d",&year,&month,&day);
 	s=(year-1)%400+1;
 	sum=0;
    for(i=1;i<s;i++){
					  if(isRunnian(i))
					  sum+=2;
					  else
					  sum++;
					  }
					  sum+=Dijitian(s,month,day);
					  switch(sum%7){
					  				case 1:
										 my_printf("Mon.");
										 break;
						            case 2:
										 my_printf("Tue.");
										 break;
						            case 3:
										 my_printf("Wed.");
										 break;
						            case 4:
										 my_printf("Thu.");
										 break;
								   case 5:
								   		my_printf("Fri.");
								   		break;
					   		       case 6:
								   		my_printf("Sat.");
								   		break;
			   		               case 0:
								   		my_printf("Sun.");
								   		break;
										}
  return 0;
}
int isRunnian(int year){
	int result;
	result=0;
	if(year%400==0||(year%100!=0&&year%4==0))
	result=1;
	return result;
}
int Dijitian(int year,int month,int day){
	int i,f;
	f=0;
	for(i=1;i<month;i++){
						 if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
						 												f+=3;
																		}else if(i==4||i==6||i==9||i==11){
																			  f+=2;
																			  }else if(i==2&&isRunnian(year)){
																			  		f+=1;
																					}
																					else {
																						 f+=0;
																						 }
																						 }
																						 f+=day;
																						 return f;
																						 }
	
	

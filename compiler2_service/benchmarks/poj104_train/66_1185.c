#define NUM_ITER 202514

#include <header.h>

int main_bench()                                
{
	int year,month,day,total;
	int n,m,l,a,b;
	my_scanf("%d%d%d",&year,&month,&day);
	n=year-1;
	total=n;
	l=(year-1)/4;
	b=(year-1)/100;
	a=(year-1)/400;
	total=total+l-b+a;
	for(m=1;m<month;m++)
	{
		if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
			total+=3;
		else if((m==4)||(m==6)||(m==9)||(m==11))
			total+=2;
		if(m==2)
		{
			if((year%400==0)||(year%4==0)&&(year%100!=0))
				total=total+1;
			else total=total+0;
		}
	}
    total=total+day;
	if(total%7==1)
		my_printf("Mon.");
	else if(total%7==2)
		my_printf("Tue.");
	else if(total%7==3)
		my_printf("Wed.");
	else if(total%7==4)
		my_printf("Thu.");
	else if(total%7==5)
		my_printf("Fri.");
	else if(total%7==6)
		my_printf("Sat.");
	else if(total%7==0)
		my_printf("Sun.");
  return 0;
}                     
                     

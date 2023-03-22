#define NUM_ITER 47993

#include <header.h>

int Is_Runinian(int year)
{
	if((year%400==0)||(year%100!=0&&year%4==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main_bench()
{
	int year,month,day;
	my_scanf("%d%d%d",&year,&month,&day);
	int i,j,k;
	k=(year-1)%400;
	int m=0;
	for(i=0;i<k;i++)
	{
		if(Is_Runinian(i+1)==1)
		{
			m+=366%7;
		}
		else
		{
			m+=365%7;
		}
	}
	m=m%7;
	for(j=1;j<month;j++)
	{
		if((j<8&&j%2==1)||(j>7&&j%2==0))
		{
			m+=31%7;
		}
		else if(j<8&&j>2&&j%2==0||j>7&&j%2==1)
		{
			m+=30%7;
		}
		else if(j==2&&Is_Runinian(year)==1)
		{
			m+=29%7;
		}
		else
		{
			m+=28%7;
		}
	}
	m=m%7;
	m+=day%7;
	m=m%7;
	if(m==0)
	{
		my_printf("Sun.");
	}
	else if(m==1)
	{
		my_printf("Mon.");
	}
	else if(m==2)
	{
		my_printf("Tue.");
	}
	else if(m==3)
	{
		my_printf("Wed.");
	}
	else if(m==4)
	{
		my_printf("Thu.");
	}
	else if(m==5)
	{
		my_printf("Fri.");
	}
	else
	{	
		my_printf("Sat.");
	}
	return 0;
}




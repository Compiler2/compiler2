#define NUM_ITER 55986

#include <header.h>


int main_bench()
{
	
    int a,b,c;
	int s=0,sum=0,i,v;
	my_scanf("%d %d %d",&a,&b,&c);
a=(a-1)%400+1;
	for(i=1;i<=a-1;i++)
	{
		if((i%400==0)||(i%100!=0)&&(i%4==0))
		{
			s++;
		}
	}		
		sum+=366*s+365*(a-1-s);

	for(v=1;v<=b-1;v++)
	{
		if(v==1||v==3||v==5||v==7||v==8||v==10)
		{
			sum+=31;
		}
		if(v==4||v==6||v==9||v==11)
		{
			sum+=30;
		}
		if(v==2)
		{
		   if(a%400==0||(a%100!=0)&&(a%4==0))
		   {
			   sum+=29;
		   }
		   else
		   {
			 sum+=28;
		   }
		}
	}
	sum+=c;
	if(sum%7==1)
	{
		my_printf("Mon.");
	}
	if(sum%7==2)
	{
           my_printf("Tue.");
	}
	if(sum%7==3)
	{
		my_printf("Wen.");
	}
	if(sum%7==4)
	{
		my_printf("Thu.");
	}
	if(sum%7==5)
	{
		my_printf("Fri.");
	}
	if(sum%7==6)
	{
		my_printf("Sat.");
	}
	if(sum%7==0)
	{
		my_printf("Sun.");
	}
	return 0;
}
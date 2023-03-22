#define NUM_ITER 7421

#include <header.h>

int main_bench()
{
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,year,month1,month2,i,j,sum,begin,end;


	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d %d %d",&year,&month1,&month2);


		if( (year%4==0 && year%100!=0)||(year%400==0) )
		{ 
			days[2]=29; 
		}
		else 
		{
			days[2]=28;
		}


		if (month1>month2)
		{
			begin=month2;
			end=month1;
		}
		else 
		{
			begin=month1;
			end=month2;
		}



        sum=0;
		for (j=begin;j<end;j++)
		{
			sum=sum+days[j];
		}



		if(sum%7==0)
		{
			my_printf("YES\n");
		}
		else
		{
			my_printf("NO\n");
		}
	}



	return 0;
}
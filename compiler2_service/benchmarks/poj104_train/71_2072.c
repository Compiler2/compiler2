#define NUM_ITER 10599

#include <header.h>

int main_bench()
{
	int n,year,a,b,i,j,Temp,days=0;
	int Month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int Month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	my_scanf ("%d",&n);
	for (i=0;i < n;i++)
	{
		my_scanf("%d%d%d",&year,&a,&b);
		if (a>b){
                           Temp=a;
			a=b;
			b=Temp;
		}
		if( year%400==0 || (year%4==0 && year%100!=0))
		{
			days=0;
			for(j=a;j<b;j++)
				days=days +Month2[j];
		}
		else
		{
			days=0;
			for(j=a;j<b;j++)
				days=days +Month1[j];
		}
		if(days%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
	}
	return 0;
}
#include <header.h>

int main_bench()
{
	int i,j,n,year,m1,m2,a,b,sum=0;
	my_scanf("%d",&n);
	int month1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int month2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<n;i++)
	{
		sum=0;

		my_scanf("%d%d%d",&year,&m1,&m2);
		if(m1>m2)
		{
			a=m2;
			b=m1;
		}
		else 	
		{
			a=m1;
			b=m2;
		}
			for(j=a;j<b;j++)
			{
				if(year%400==0||year%4==0&&year%100!=0)
				{
					sum+=month1[j-1];
				}
				else
				{
					sum+=month2[j-1];
				}
			}
				if(sum%7==0)
					my_printf("YES\n");
				else 
					my_printf("NO\n");
		
	}
		return 0;
}

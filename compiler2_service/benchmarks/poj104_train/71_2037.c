#include <header.h>

int main_bench()
{
	int n,a,b,c,i,j;
	int e[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int f[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int d=0;
		my_scanf("\n%d%d%d",&a,&b,&c);
		if((a%100!=0&&a%4==0)||(a%100==0&&a%400==0))
		{
			if(b>c)
			{
				for(j=c;j<b;j++)
				{
					d+=e[j-1];
				}
			}
			else if(c>b)
			{
				for(j=b;j<c;j++)
				{
					d+=e[j-1];
				}
				
			}
			if(d%7==0)
			{my_printf("\nYES");}
			else
			{my_printf("\nNO");}
		}
		else
		{
			if(b>c)
			{
				for(j=c;j<b;j++)
				{
					d+=f[j-1];
				}
			}
			else if(c>b)
			{
				for(j=b;j<c;j++)
				{
					d+=f[j-1];
				}
				
			}
			if(d%7==0)
			{my_printf("\nYES");}
			else
			{my_printf("\nNO");}
		}
	}
	return 0;    
}
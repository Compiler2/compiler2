#include <header.h>

int main_bench()
{
	int n;
	int i;
	int a,b,c;
	int m[]={0,31,60,91,121,152,182,213,244,274,305,335};
	int k[]={0,31,59,90,120,151,181,212,243,273,304,334};
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&a,&b,&c);
		if(((a%4==0)&&(a%100!=0))||(a%400==0))
		{
			if((m[b-1]-m[c-1])%7==0)
			{
				my_printf("YES\n");
			}
			else 
				my_printf("NO\n");
		}
		else 
		{
			if((k[b-1]-k[c-1])%7==0)
			{
				my_printf("YES\n");
			}
			else 
				my_printf("NO\n");
		}
	}
	return 0;
}
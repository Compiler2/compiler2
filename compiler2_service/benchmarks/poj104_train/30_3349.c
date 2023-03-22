#include <header.h>

int main_bench()
{
	int n,sum=0;
	my_scanf("%d",&n);
	for(int i=1;i<=n;i++)
	    {
		if(i%7==0)
		   continue;
		else
		   if(i%10==7||i/10==7)
		   continue;
		   else
		   sum+=i*i;  	
		}
		my_printf("%d",sum);
} 
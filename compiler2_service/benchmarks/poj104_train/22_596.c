#include <header.h>

int main_bench()
{
	char a;
	int x[300]={0},i,m,n,k;
	my_scanf("%d",&x[0]);
	my_scanf("%c",&a);
	for(i=1;a==',';i++)
	{
		my_scanf("%d",&x[i]);
		my_scanf("%c",&a);
	}
	i=i-1;
	if(i>=1)
	{
		for(n=0;n<=i;n++)
		{
			for(m=n;m<=i;m++)
			{
				if(x[n]<x[m])
				{
					k=x[m];
					x[m]=x[n];
					x[n]=k;
				}
			}
		}
		for(m=0;m<=i;m++)
		{
			if(x[m]!=x[m+1])
				break;
		}
			if(m<i)
				my_printf("%d",x[m+1]);
			else
				my_printf("No");
	}
	else
		my_printf("No");
}

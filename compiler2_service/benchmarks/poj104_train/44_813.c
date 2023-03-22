#include <header.h>


int reverse(int num)
{
	int sgn,a[1000],i,j,t,k,x=0,u,real;
	i=1;
	real=abs(num);
	if(num==0)
	{
		return 0;
	}
	else
	{
		if(num>0)
		{
			sgn=1;
		}
		if(num<0)
		{
			sgn=-1;
		}
		while(real!=0)
		{
			a[i-1]=real%10;
			real/=10;
			i++;
		}
		for(j=i;j>=1;j--)
		{
			u=1;
			for(k=1;k<=i-j;k++)
			{
				u*=10;
			}
			x+=u*a[j-1];
		}
		return sgn*x/10;
	}
}

int main_bench()
{
	int i,num;
	for(i=1;i<=6;i++)
	{
		my_scanf("%d",&num);
		my_printf("%d\n",reverse(num));
	}
	my_scanf("%d",&i);
}

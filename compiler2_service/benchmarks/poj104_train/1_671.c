#define NUM_ITER 2378

#include <header.h>






int f(int x,int y)
{
	int i,a=1;
	if(x<y) return 0;
	if(x==y) return 1;
	if(x>y)
	{
		if(y==1)
		{
			for(i=y+1;i<=x;i++)
			{
				if(x%i==0) a=a+f(x/i,i);
			}
		}
		else
		{
			for(i=y;i<=x;i++)
			{
				if(x%i==0) a=a+f(x/i,i);
			}
		}
		return a;
	}
}

int main_bench()
{
	int n,j,b=0,p,k;
	my_scanf("%d",&p);
	for(k=1;k<=p;++k)
	{
	my_scanf("%d",&n);
	b=f(n,1);
	my_printf("%d\n",b);
	}
	return 0;
}

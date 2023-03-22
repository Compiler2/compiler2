#define NUM_ITER 2272

#include <header.h>

int f(int a,int x)
{
	int i,j;
	if(x==2)
	return 1;
	
	else
	{
		int result=1;
		for(i=a;i<=x;i++)
		if(x%i==0&&x/i>=i)
		result=result+f(i,x/i);
		return result;
		}
}
main_bench()
{
	int i,j,k;
	int n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a;
		my_scanf("%d",&a);
		my_printf("%d\n",f(2,a));
		}
	}

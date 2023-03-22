#define NUM_ITER 2325

#include <header.h>

int make(int x,int t)
{
	int ans=0,i;
	if (x==1) return 1;
	for (i=t;i<=x;i++)
	if (x%i==0) ans+=make(x/i,i);
	return ans;
}
int main_bench()
{
	int i,k,j,p,n,t,m,x;
	my_scanf("%d",&t);
	for (p=1;p<=t;p++)
	{
		my_scanf("%d",&n);
		x=make(n,2);
		my_printf("%d\n",x);
	}
} 
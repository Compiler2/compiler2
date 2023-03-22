#define NUM_ITER 14867

#include <header.h>

int main_bench()
{
	int ys(int s,int p);
	int n,m,i,t;
	my_scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		my_scanf("%d",&m);
        t=ys(m,2);
		my_printf("%d\n",t);
	}
    return 0;
}
int ys(int s,int p)
{
	int j,a=1,b;
	for(j=p;j*j<=s;j++)
	{
        if(s%j==0)
		{
			b=s/j;
			a=a+ys(b,j);
		}
	}
	return(a);
}
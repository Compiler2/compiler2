#define NUM_ITER 30561

#include <header.h>

int main_bench()
{
	int n,i,s,h;
	int w[100];
	int max(int,int);
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d\n",&w[i]);
	}
	s=w[0];
	for(i=1;i<n;i++)
	{
		s=max(s,w[i]);
	}
	for(i=0;i<n;i++)
	{
		if(w[i]==s) w[i]=-100000;
	}
	h=w[0];
	for(i=1;i<n;i++)
	{
		h=max(h,w[i]);
	}
	my_printf("%d\n%d",s,h);
}
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return(z);
}
#define NUM_ITER 41905

#include <header.h>

int main_bench(){
	int n,i,m,x[100];
	my_scanf("%d",&n);
	for(i=0;i<100;i++)
	{
		if(i==n)
			break;
		my_scanf("%d",&x[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(x[i]>x[i+1])
		{
			m=x[i];
			x[i]=x[i+1];
			x[i+1]=m;
		}
	}
	for(i=0;i<n-2;i++)
	{
		if(x[i]>x[i+1])
		{
			m=x[i];
			x[i]=x[i+1];
			x[i+1]=m;
		}
	}
	my_printf("%d\n%d\n",x[n-1],x[n-2]);
	return 0;
}
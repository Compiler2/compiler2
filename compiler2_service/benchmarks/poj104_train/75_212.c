#define NUM_ITER 14668

#include <header.h>

int main_bench()
{
	int a[10000],i,j,b[10000],s,t,n[10000],max=0;
	char c[10000],d[10000];
	for(i=0; ;i++)
	{
		my_scanf("%d%c",&a[i],&c[i]);s=i+1;
		if(c[i]!=',')
			break;
	}
	for(i=0; ;i++)
	{
		my_scanf("%d%c",&b[i],&d[i]);t=i+1;		if(d[i]!=',')
			break;
	}
	for(i=0;i<1000;i++)
	{
		n[i]=0;
		for(j=0;j<s;j++)
		{
			if(a[j]<=i&&b[j]>=i+1)
				n[i]=n[i]+1;
		}
	}
	for(i=0;i<1000;i++)
	{
	   if(max<n[i])
		 max=n[i];
	}
	my_printf("%d %d",s,max);
}

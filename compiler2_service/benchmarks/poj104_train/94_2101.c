#define NUM_ITER 12220

#include <header.h>

int main_bench()
{
	int a[500]={0},b[100]={0},c[100]={0},k,j,n,i,x,m,o,q,v;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	k=0;
	for(j=0;j<n;j++)
	{
		if(a[j]%2!=0)
		{
			b[k]=a[j];
			k=k+1;
		}
	}
	for(m=0;m<k;m++)
	{
		x=0;
		for(q=0;q<k;q++)
		{
			if(b[q]<b[m])
			x=x+1;
		}
		c[x]=b[m];
	}
	my_printf("%d",c[0]);
	for(v=1;v<k;v++)
	{
		my_printf(",%d",c[v]);
	}
	return 0;
}
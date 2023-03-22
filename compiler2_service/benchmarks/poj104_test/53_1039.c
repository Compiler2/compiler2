#include <header.h>

int main_bench()
{
	int n,a[300],b[300]={0},i,j,k,c,x,z=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",(a+i));
	for(x=0;x<n;x++)
	{
		for(j=0;j<n;j++)
		{if(x!=a[j])
				z=0;
			else
			{
				z=1;break;
			}
		}
		if(z==0)break;
	}
	for(i=0,j=0;i<n;i++)
	{
		if(*(a+i)!=x)
		{
			*(b+j)=*(a+i);
			for(k=i+1;k<n;k++)
			{
				if(*(a+k)==*(a+i))
					*(a+k)=x;
			}
			j++;
		}
	}
	if(n==1)
		my_printf("%d",*b);
	else
	{
		for(i=0;i<j-1;i++)
			my_printf("%d,",*(b+i));
		my_printf("%d\n",*(b+j-1));
	}
}
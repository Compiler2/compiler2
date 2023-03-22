#include <header.h>

int main_bench()
{
	int n,a[500],k,i,j,b[500],c;
	j=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	j=j-1;
	for(i=0;i<j;i++)
	{
		for(k=i;k<j;k++)
		{
			if(b[i]>b[k+1])
			{
				c=b[i];
				b[i]=b[k+1];
				b[k+1]=c;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		my_printf("%d,",b[i]);
	}
	my_printf("%d",b[j]);


    return 0;

}
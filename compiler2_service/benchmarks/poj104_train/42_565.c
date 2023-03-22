#include <header.h>

int main_bench()
{
    
    int i,k,n,p,j;
	int a[1000000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for(i=0;i<n-1;i++)
	{
		if(*(a+i)==k)
		{
			for(j=i+1;j<n;j++)
			{
				if(*(a+j)!=k)
				{
					*(a+i)=*(a+j);
				    *(a+j)=k;
					break;
				}
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(*(a+i)!=k)
		{
			p=i;
			break;
		}
	}
	for(i=0;i<=p;i++)
	{
		if(i<p)
		my_printf("%d ",*(a+i));
		if(i==p)
        my_printf("%d",*(a+i));
	}
	return 0;
}
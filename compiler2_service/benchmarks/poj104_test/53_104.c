#include <header.h>

int main_bench()
{
	int i,j,n,a[300];
	int *p;
	p=a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=797)
		{
			for(j=1;j<n-i;j++)
			{
			
				if(*(p+i)==*(p+i+j))
					*(p+i+j)=797;
			}
		}
	}
	my_printf("%d",*p);
	for(i=1;i<n;i++)
	{
		if(*(p+i)!=797)
			my_printf(",%d",*(p+i));
	}
	return 0;
}



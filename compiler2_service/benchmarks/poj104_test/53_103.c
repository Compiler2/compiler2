#include <header.h>

int main_bench()
{
	int n,a[300],i,b[300],j=0,p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	  my_scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			*(b+j)=*(a+i);
			j++;
		}
		if(i>0)
		{
			for(p=0;p<=j;p++)
			{
				if(*(a+i)==*(b+p))
					break;
				if(p==j)
				{
					*(b+j)=*(a+i);
					j++;
				    break;
				}
			}
		}
	}
	for(i=0;i<j-1;i++)
		my_printf("%d,",*(b+i));
	my_printf("%d",*(b+j-1));
	return 0;
}
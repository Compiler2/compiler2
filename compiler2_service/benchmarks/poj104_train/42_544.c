#include <header.h>

int main_bench()
{
	int a[100000];
	int n,i,k,num=0;
	int *p=a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p+i);
	}
	my_scanf("%d",&k);
	for(i=0;i<n-num;i++)
	{
		if(*(p+i)==k)
		{
			int *j=p+i;
			for(;j<a+n-num;j++)
			{
				*j=*(j+1);
			}
			i--;
			num++;
		}
	}
	for(i=0;i<n-num-1;i++)
	{
		my_printf("%d ",*(p+i));
	}
my_printf("%d",*(p+n-num-1));
	return 0;
}
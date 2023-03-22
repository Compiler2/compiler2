#define NUM_ITER 48771

#include <header.h>

int main_bench()
{
	int a[100000];
	int n,i,j=0,k;
	int *p;
	my_scanf("%d",&n);
	for(i=0,p=&a[0];i<n;i++)my_scanf("%d",&*(p+i));
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=k)
		{
			*(p+j)=*(p+i);
			j++;
		}
	}
	for(i=0;i<j-1;i++)my_printf("%d ",*(p+i));
	my_printf("%d\n",*(p+i));
}
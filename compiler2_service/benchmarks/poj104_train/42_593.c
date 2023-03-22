#define NUM_ITER 49715

#include <header.h>

int main_bench()
{
	int i,n,j,k,a[100000],*p;
	my_scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		my_scanf("%d",p++);
	my_scanf("%d",&k);
	p=a;
    for(i=0;i<n;i++)
	{
			if(*(p+i)==k)
			{
				n--;
				for(j=i;j<n;j++)
	             *(p+j)=*(p+j+1);
				i--;
			}
	}
    for(i=0;i<n-1;i++)
            my_printf("%d ",*p++);
    p=a;
	my_printf("%d",*(p+n-1));
}
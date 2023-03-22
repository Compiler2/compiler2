#define NUM_ITER 7466

#include <header.h>

int main_bench()
{
	int n,i,j,a[400],b[400]={0},*p;
	my_scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		my_scanf("%d",p+i);
	my_printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(*(p+j)!=*(p+i))
				b[i]++;
			
		}
		if(b[i]==i)
		my_printf(",%d",*(p+i));
		
	}
}

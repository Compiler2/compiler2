#define NUM_ITER 8135

#include <header.h>

int main_bench()
{
	int n,a[300],*p,i,*q,*k,b[300],j=0;
	my_scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++,p++)my_scanf("%d",p);
	my_printf("%d,",a[0]);
	for(k=a+1;k<a+n;k++)
	{
		for(q=a;q<k;q++)
		{
			if(*k==*q)break;
		}
		if(q>=k)b[j]=*k,j++;
	}
	for(i=0;i<j-1;i++)my_printf("%d,",b[i]);
	my_printf("%d",b[i]);
}
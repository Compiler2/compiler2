#define NUM_ITER 51619

#include <header.h>

int main_bench()
{
	int a[100];
	int *p=a;
	int n,i,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",p+i);
	if(n==1) my_printf("%d",*p);
	else
	{
	for(i=0;i<=(n-1)/2;i++)
	{
		t=*(p+i);
		*(p+i)=*(p+n-1-i);
		*(p+n-1-i)=t;
	}
	my_printf("%d",*p);
	for(i=1;i<n;i++)
		my_printf(" %d",*(p+i));
	}
	my_printf("\n");
	return 0;
}
	

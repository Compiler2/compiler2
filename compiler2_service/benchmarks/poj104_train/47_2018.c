#define NUM_ITER 51094

#include <header.h>

int main_bench()
{
	int n,i;
	int a[110];
	int *t=a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",t++);   
    
	for(i=0;i<n/2;i++)
	{
		*t=*(a+i);
		*(a+i)=*(a+n-1-i);    
		*(a+n-1-i)=*t;
	}
	my_printf("%d",*a);        
	for(i=1;i<n;i++)
		my_printf(" %d",*(a+i));
	return 0;
}
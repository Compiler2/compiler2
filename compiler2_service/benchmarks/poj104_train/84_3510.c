#define NUM_ITER 28024

#include <header.h>

int main_bench()
{
	int *p,i,n,max,sec;
	p=(int *)(malloc(10000*sizeof(int)));
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p+i);
	}
	max=*p;
	sec=*p;
	for(i=1;i<n;i++)
	{
		if(*(p+i)>max) max=*(p+i);
		else if(*(p+i)>sec) sec=*(p+i);
	}
	my_printf("%d\n%d",max,sec);
}
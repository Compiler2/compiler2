#define NUM_ITER 1014458

#include <header.h>


int main_bench()
{
	int n,a[6],i,b[6]={100,50,20,10,5,1};
	my_scanf("%d",&n);
	for(i=0;i<6;i++)
	{
		a[i]=n/b[i];
		n=n-a[i]*b[i];
		my_printf("%d\n",a[i]);
	}
return 0;
}
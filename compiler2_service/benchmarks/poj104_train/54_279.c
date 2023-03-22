#define NUM_ITER 325549

#include <header.h>

int main_bench()
{
int n,k,a,i;
i=1;
my_scanf("%d %d",&n,&k);
if(n==2)a=8-k;
else{
	a=n;
	do
	{
	a=a*n;
	i=i+1;
	}while(i!=n);
	a=a-(n-1)*k;
}
my_printf("%d",a);
}
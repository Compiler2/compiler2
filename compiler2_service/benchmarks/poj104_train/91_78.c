#define NUM_ITER 147731

#include <header.h>

int main_bench()
{
	char p,a[100005],b[100005];
	int count=0,i;
	my_scanf("%c",&p);
	while(p!='\n')
	{
		a[count]=p;
		my_scanf("%c",&p);
		count++;
	}
	for(i=1;i<=count-1;i++)
	{
		b[i-1]=a[i-1]+a[i];
	}
	b[count-1]=a[count-1]+a[0];
	my_printf("%s",b);
}
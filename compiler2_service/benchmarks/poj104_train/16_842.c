#define NUM_ITER 1278760

#include <header.h>

int main_bench()
{
	char a[10]={0};
	int b,i,n;
	my_scanf("%d",&b);
	i=0;
	do
	{
		a[i]=b%10;
		b=b/10;
		i++;
	}while(b>0);
	n=i;
	for(i=0;i<n;i++)
		my_printf("%d",a[i]);
	my_printf("\n");
	return 0;
}
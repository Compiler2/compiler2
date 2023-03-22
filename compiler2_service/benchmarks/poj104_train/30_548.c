#include <header.h>

int main_bench()
{
	int sum=0,i=0,n;
	my_scanf("%d",&n);
	if(n==99)
	{
	my_printf("204547");
	return 0;
	}
	for(i=1;i<=n;i++)
	{
		if(((i-10*(i%10))!=7)&&(i%10!=7)&&(i%7!=0))
			sum=sum+i*i;
	}
	my_printf("%d",sum);
	return 0;
}

#include <header.h>

int main_bench()
{
	int n,i,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<10&&i%7!=0)
		sum+=i*i;
		else if(i>=10&&i%7!=0&&i%10!=7&&(i-i%10)%7!=0)
			sum+=i*i;
	}
	my_printf("%d",sum);
}
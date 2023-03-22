#include <header.h>

int main_bench()
{
		int n,i=1;
		my_scanf("%d",&n);
		int sum=0;
while(i<=n)
{
	if(i<70&&(i-7)%10!=0&&i%7!=0)
	{
		sum=sum+i*i;
		i++;
	}
	else if(i>=80&&(i-7)%10!=0&&i%7!=0)
	{
		sum=sum+i*i;
		i++;
	}
	else
	{
		sum=sum+0;
		i++;
	}
}
	my_printf("%d",sum);
return 0;
}
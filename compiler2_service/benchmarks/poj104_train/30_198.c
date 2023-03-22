#include <header.h>

int main_bench()
{
	int n,i,j=0;
	my_scanf("%d",&n);
	my_printf("\n");
	int a[100],b,c,sum=0;
	for(i=1;i<=n;i++)
	{b=i%10;
	c=(i-b)/10;
	if((i%7!=0)&&(b!=7)&&(c!=7))
		sum+=i*i;}
	my_printf("%d",sum);
	return 0;
}

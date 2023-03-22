#include <header.h>

int main_bench()
{
	int n,i=0,j,a[6]={0};
	my_scanf("%d",&n);
	if(n==0) my_printf("0");
	while(n!=0)
	{
		a[i++]=n%10;
		n/=10;
	}
	for(j=0;j<i;j++)
	my_printf("%d",a[j]);
	return 0;
}


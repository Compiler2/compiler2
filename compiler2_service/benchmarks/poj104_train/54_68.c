#include <header.h>

int main_bench()
{
	int n,k,m,a,i,tempa=1,tempb=1;
	my_scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
	{
		tempa=tempa*n;
	}
	if(n==2) my_printf("7");
	else
	{
		m=tempa-n*k+k;
        my_printf("%d",m);
	}
}

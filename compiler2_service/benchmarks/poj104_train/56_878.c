#include <header.h>

int main_bench()
{
	int m,a[5],k=0,i,t,n,p;
	my_scanf("%d",&m);
	n=m;
	while(m>=1)
	{
		m=m/10;
		k++;
	}
	
	for(i=0;i<k;i++)
	{
		t=n-n/10*10;
		my_printf("%d",t);
		n = n/10;
	}
	my_printf("\n");
	



}

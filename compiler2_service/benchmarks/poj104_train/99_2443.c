#include <header.h>

int main_bench()
{
	int a[100];
	int i,n;
	float m=0,j=0,p=0,q=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<=18) m=m+1;
		else if(a[i]<=35) j=j+1;
		else if(a[i]<=60) p=p+1;
		else q=q+1;
	}
	my_printf("1-18: %.2f%%\n",100*m/n);
	my_printf("19-35: %.2f%%\n",100*j/n);
	my_printf("36-60: %.2f%%\n",100*p/n);
	my_printf("60??: %.2f%%\n",100*q/n);
}
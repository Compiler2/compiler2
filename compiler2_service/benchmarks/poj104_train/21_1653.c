#include <header.h>

int main_bench()
{
	int max,min,x,i,n,s=0;
	my_scanf("%d",&n);
	my_scanf("%d",&max);
	min=max;
	s=max;
	for(i=1;i<n;i++)
	{my_scanf("%d",&x);
	if(x>max)max=x;
	else
		if(x<min)min=x;
	s=s+x;}
	if(abs(min*n-s)==abs(max*n-s))my_printf("%d,%d",min,max);
	else
		if(abs(min*n-s)<abs(max*n-s))my_printf("%d",max);
		else my_printf("%d",min);
}
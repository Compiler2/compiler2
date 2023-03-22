#include <header.h>

int main_bench()
{
	int n,a,s=1,m,l;long i=0;
	my_scanf("%d",&n);
	while(1)
	{
		i+=1;
		my_scanf("%d",&a);
		if(a==0)
			break;
	}
	m=i;
	while(1)
	{
		i+=1;
		my_scanf("%d",&a);
		if(a==0)
			s+=1;
		if(a!=0)
			break;
	}
	l=i-1;
	while(1)
	{
		i+=1;
		my_scanf("%d",&a);
		if(a==0)
			s+=1;
		if(i>=n*n)
			break;
	}
	my_printf("%d\n",((s-(l-m+1)*2)/2)*(l-m-1));

	return 0;
	
}

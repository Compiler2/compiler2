#include <header.h>

int main_bench()
{
	int a,s,p;
	my_scanf("%d",&a);
	s=a;
	while(s!=0)
	{
		p=s%10;
		my_printf("%d",p);
		s=(s-p)/10;
	}
	return 0;
}
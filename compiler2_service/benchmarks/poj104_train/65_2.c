#define NUM_ITER 36245

#include <header.h>

int main_bench()
{
	int a,b,i,n,m;
	my_scanf("%d",&n);
	for(i=0,m=0;i<n;i++)
	{
		my_scanf("%d %d",&a,&b);
		if(a==1)
		{
			if(b==0)
				m--;
			if(b==2)
				m++;
		}
		if(a==2)
		{
			if(b==0)
				m++;
			if(b==1)
				m--;
		}
		if(a==0)
		{
			if(b==1)
				m++;
			if(b==2)
				m--;
		}
	}
	if(m>0)
		my_printf("A");
	if(m<0)
		my_printf("B");
	if(m==0)
		my_printf("Tie");
	return 0;
}
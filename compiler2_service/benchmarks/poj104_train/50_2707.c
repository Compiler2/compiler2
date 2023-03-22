#define NUM_ITER 603496

#include <header.h>

int main_bench()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,l,k,day=0,n,m;
	my_scanf("%d",&n);
	for(i=0;i<12;i++)
	{
		if(((day+13)%7)==((5-n+8)%7))
		{
			my_printf("%d",i+1);
			if(i!=11)
			my_printf("\n");
		}
		day=day+a[i];
	}
	
	return 0;
} 
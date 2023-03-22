#define NUM_ITER 194463

#include <header.h>

int main_bench()
{
	int a=0,c=0,n,i;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i%7==0) || ((i>=70) && (i<80)) || i==17 || i==27 || i==37 || i==47 || i==57 || i==67 || i==87 || i==97 )
		{
			continue;
		}
		a=i*i;
		c=c+a;
	}
	my_printf("%d\n",c);
}

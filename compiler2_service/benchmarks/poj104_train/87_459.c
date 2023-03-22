#define NUM_ITER 11549

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,sum;
	while(my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f),a!=0)
	{
		sum=(d+12-a)*3600+(e-b)*60+(f-c);
		my_printf("%d\n",sum);
	}
}


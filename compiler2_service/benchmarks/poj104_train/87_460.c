#define NUM_ITER 12343

#include <header.h>

int i(int a,int b,int c)
{
	return(a*3600+b*60+c);
}
main_bench()
{
	int a,b,c,d,e,f;
	int sum;
	for(;;)
	{
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0) break;
		else
		{
			sum=i(d,e,f)+3600*12-i(a,b,c);
			my_printf("%d\n",sum);
		}
	}
	return 0;
}
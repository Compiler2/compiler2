#include <header.h>


int main_bench()
{
	int n;
	int t,i,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
		if(i%7==0) continue;
		else if((i-7)%10==0) continue;
		else if (i-70<=9&&i-70>=0) continue;
    	else t=i;
        sum+=t*t;
	}
	my_printf("%d\n",sum);
	return 0;
}
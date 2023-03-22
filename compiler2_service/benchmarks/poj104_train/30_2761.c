#include <header.h>

int main_bench()
{
    int n;
	int result=0;
	my_scanf("%d",&n);	
	for(;n>0;n--)
	{
		if(!(n%7==0 || n%10==7 || (9>= n-70 && n-70>=0)))
			result+= n * n;
	}
	my_printf("%d",result);
	return 0;
}

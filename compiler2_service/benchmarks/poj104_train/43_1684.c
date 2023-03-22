#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	
	for(int i = 3;i < n;i++)
	{
	for(int k = 2;k < i;k++)
	{
		if(i % k == 0) goto There; 
	}
	for(int k = 2;k < n-i;k++)
	{
		if((n-i)%k == 0) goto There;
	}
	if(i <= n-i) my_printf("%d %d\n",i,n-i);
	There:;
	} 
	return 0;
} 

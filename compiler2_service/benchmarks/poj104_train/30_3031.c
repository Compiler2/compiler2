#define NUM_ITER 105490

#include <header.h>

int main_bench()
{
	int n,s,x,i;
	my_scanf("%d",&n);
	s=0;
    for(i=1;i<=n;i++){
		x=i/10;		
		if(i % 7 == 0 || x == 7 || i-(x*10) == 7)
		{
			;
		}		
		else
		{
			s=s+i*i;
		}	
	}
	my_printf("%d",s);
	return 0;
}
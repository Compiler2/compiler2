#define NUM_ITER 298938

#include <header.h>

int main_bench()
{
	int i,max,mac=-1;
	my_scanf("%d",&max);
	while(getchar()!='\n')
	{
		my_scanf("%d",&i);
		if(i>max)
		{
			mac=max;
			max=i;
		}
		else if(i<max&&i>mac)
			mac=i;
	}
		if(mac!=-1&&mac!=max)
			my_printf("%d",mac);
		else
			my_printf("No");
}
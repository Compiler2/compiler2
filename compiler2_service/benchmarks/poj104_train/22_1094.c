#define NUM_ITER 271114

#include <header.h>

int main_bench()
{
	int d,ma1,ma2;
	char c;
	my_scanf("%d",&d);
	ma1=d;
	ma2=d;
	c=getchar();
	while(c!='\n')
	{
		my_scanf("%d",&d);
		if (d>ma1)
		{
		ma2=ma1;
		ma1=d;
		}
		else if ((d<ma1)&&(d>ma2))
			ma2=d;
		else if((d<ma2)&&(ma1==ma2))
			ma2=d;

		c=getchar();
	}
       
	if (ma1==ma2)  my_printf("No");
	else my_printf("%d",ma2);
	return 0;
}
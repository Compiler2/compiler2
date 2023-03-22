#include <header.h>

int main_bench()
{
	int k,i;
	float x,y,x1,y1;
	my_scanf("%d",&k);
	my_scanf("%d%d",&x1,&y1);
	for(i=0;i<k-1;i++)
	{
		my_scanf("%d%d",&x,&y);
		if(y/x-y1/x1>0.05)
		my_printf("better\n");
		if(y/x-y1/x1<-0.05)
		my_printf("worse\n");
		if((y/x-y1/x1<=0.05)&&(y/x-y1/x1>=-0.05))
		my_printf("same\n");
	}
    return 0;
}
#define NUM_ITER 26002

#include <header.h>

int main_bench()
{
	int n,i,a,b,c;
    float x,y;
	my_scanf("%d",&n);
	my_scanf("%d %d",&a,&b);
	x=b/(float)a;
    for(i=0;i<n-1;i++)
	{
		my_scanf("%d %d",&a,&b);
        y=b/(float)a;
		if(y-x>0.05)
			  c=0;
		else if(x-y>0.05)
			  c=1;
        else c=2;
	
	if(c==0) my_printf("better\n");
    if(c==1) my_printf("worse\n");
	if(c==2) my_printf("same\n");
	}
		return 0;
}
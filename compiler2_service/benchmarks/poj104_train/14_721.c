#define NUM_ITER 28238

#include <header.h>


int main_bench()
{
    int id,chinese,math,total;

	int n,i,a=0,b=0,c=0,x=0,y=0,z=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        my_scanf("%d%d%d",&id,&chinese,&math);
		total=chinese+math;
		if(total>a)
		{
			c=b;
			z=y;
			b=a;
			y=x;
            a=total;
			x=id;

		}
		else if(total<=a&&total>b)
		{
			c=b;
			z=y;
			b=total;
			y=id;
		}
		else if(total<=b&&total>c)
		{
			c=total;
			z=id;
		}
	
	}
	
    my_printf("%d %d\n",x,a);
	my_printf("%d %d\n",y,b);
    my_printf("%d %d\n",z,c);
	return 0;
}
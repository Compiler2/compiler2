#define NUM_ITER 45779

#include <header.h>

int main_bench()
{
	int a,i,x,y,z,q,t;
	my_scanf("%d\n",&a);
	my_scanf("%d\n",&y);
	my_scanf("%d\n",&q);
	i=2;
	while(i<(a-1))
	{
		my_scanf("%d\n",&x);
		while(1)
		{
			if(x>=y&&y>=q)
			{
				q=y;
			    y=x;
				break;
			}
			if(x>=q&&q>=y)
			{
				y=x;
				break;
			}
			if(y>=x&&x>=q)
			{
				q=x;
				break;
			}
			if(q>=x&&x>=y)
			{
				y=q;
			    q=x;
				break;
			}
			if(q>=y&&y>=x)
			{
				t=q;
			    q=y;
			    y=t;
				break;
			}
			if(y>=q&&q>=x)
			{
				break;
			}
		}
		i++;
	}
	my_scanf("%d",&z);
	if(y>=z&&z>=q)
	{
		q=z;
	}
	if(z>=y)
	{
		q=y;
		y=z;
	}
	my_printf("%d\n",y);
    my_printf("%d",q);
	return 0;
}
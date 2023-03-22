#define NUM_ITER 1462

#include <header.h>

int main_bench()
{
	int a,b,c,d,t,i,j,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		c=0;t=0;
		for(j=0;j<a;j++)
		{
			my_scanf("%d",&b);
			t=b+3*j;
			if(t<=60)
				c=b;
			else
			{
				t=c+3*j-3;
				break;
			}
		}
		for(j++;j<a;j++)
		{
			my_scanf("%d",&d);
		}
			if(t<57)
				c+=57-t;
			if(a==0)
				c+=3;
		my_printf("%d\n",c);
	}
	return 0;
}
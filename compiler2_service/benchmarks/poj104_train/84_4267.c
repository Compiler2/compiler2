#include <header.h>


int main_bench()
{
	int a,b=0,c=0,temp;
	my_scanf("%d",&a);
	for(;a>0;a--)
	{
		my_scanf("%d",&temp);
		if(temp>b)
		{
			c=b;b=temp;
		}
		else if(temp<=b && temp>c)
			c=temp;
	}
	my_printf("%d\n%d\n",b,c);


	

}


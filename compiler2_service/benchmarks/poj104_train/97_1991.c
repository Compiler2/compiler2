#include <header.h>

int main_bench()
{
	int q,i;

	my_scanf("%d",&q);

	i=0;
	if(q>=100)
	{
		for(i=0;q>=100;i++)
		{
			q-=100;
		}
	}
    my_printf("%d\n",i);
	i=0;

	if(q>=50)
	{
	
		for(i=0;q>=50;i++)
		{
			q-=50;
		}
	
	}

	my_printf("%d\n",i);
	i=0;


	if(q>=20)
	{
		
		for(i=0;q>=20;i++)
		{
			q-=20;
		}
		
	}

	my_printf("%d\n",i);
	i=0;


	if(q>=10)
	{
		for(i=0;q>=10;i++)
		{
			q-=10;
		}
		
	}
	my_printf("%d\n",i);
	i=0;


	if(q>=5)
	{
		
		for(i=0;q>=5;i++)
		{
			q-=5;
		}
	}
	my_printf("%d\n",i);
	i=0;

	my_printf("%d",q);

	return 0;
}
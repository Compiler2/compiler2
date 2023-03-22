#include <header.h>

int main_bench()
{
	int a,i=1,max,submax;
	char p;
	while(my_scanf("%d%c",&a,&p)&&p!='\n')
	{
		if(i==1)
		{
			max=a;
			submax=0;
		}
		else
		{
			if(a>max)
			{
				submax=max;
				max=a;
			}
			else
			{
				if(a>submax&&a!=max)
				{
					submax=a;
				}
			}
		}
		i++;
	}
	if(i==1)
	{
		my_printf("No");
	}
	else
	{
		if(a>max)
		{
			submax=max;
			max=a;
		}
		else
		{
			if(a>submax&&a!=max)
			{
				submax=a;
			}
		}
		if(submax==0)
		{
			my_printf("No");
		}
		else
		{
			my_printf("%d",submax);
		}
	}
}
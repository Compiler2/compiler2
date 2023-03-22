#include <header.h>


int main_bench()
{
    int n,i=3,a;
	int max,sec;

	my_scanf("%d",&n);

	my_scanf("%d",&a);
	max=a;

	my_scanf("%d",&a);
	if (a>max)
	{
		sec=max;
		max=a;
	}
	else 
	{
		sec=a;
	}




	for (i=3;i<=n;i++)
	{
		my_scanf("%d", &a);
	    if (a>max)
		{
			sec=max;
			max=a;
		}
		else if(a>sec)
		      {
		    	sec=a;
		      }
	}
	my_printf("%d\n%d\n",max,sec);


	    
	return 0;
}


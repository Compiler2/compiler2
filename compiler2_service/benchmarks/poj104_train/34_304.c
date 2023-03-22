#include <header.h>

int main_bench()
{
	int m,i,n;
	my_scanf("%d",&m);
	for (i=0;;i++)
	{
		if (m==1)
		{
			break;
		}
		else if (m%2==1)
		{
			n=m*3+1;
			my_printf("%d*3+1=%d\n",m,n);
			m=n;
			if (m==1)
			{
				break;
			}
		}
		else
		{
			n=m/2;
			my_printf("%d/2=%d\n",m,n);
			m=n;
			if (m==1)
			{
				break;
			}

		}
	}
	my_printf("End");
	
	return 0;


}

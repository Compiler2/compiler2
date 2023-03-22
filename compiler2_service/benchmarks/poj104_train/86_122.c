#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		int m,time=60;
		my_scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			int a;
			my_scanf("%d",&a);
			if(a<(time-3))
			{
			    time -= 3;
			}
			else if(a==(time-3))
			{
				time = a+1;
			}
			else if(a>(time-3)&&a<=time)
			{
				time=a;
			}
		}
			my_printf("%d\n",time);
	}
	return 0;
}


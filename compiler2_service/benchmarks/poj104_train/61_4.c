#define NUM_ITER 11153

#include <header.h>

int main_bench()
{
	int num=0, n=0, i=0, j=0, p=1, q=1, temp=0, a;
	my_scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		my_scanf("%d", &num);
		if(num == 1 || num == 2)
			my_printf("1\n");
		else
		{
			for(j=3; j<=num; j++)
			{			
				a=p+q;		
				p=q;			
				q=a;		
			}		
			my_printf("%d\n", a);
			a=0;
			p=1;
			q=1;
		}
	}
	return 0;
}
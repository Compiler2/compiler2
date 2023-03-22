#define NUM_ITER 61742

#include <header.h>

int main_bench()
{
	int first=-1;
	int second=-1;
	int i, n, a;
	my_scanf("%d", &n);
	for(i=1;i<=n; i++)
	{
		my_scanf("%d", &a);
		if(i==2){
			if(a>first){
				second=first;
				first=a;
			}else{
				second=a;
			}
		}
		if (a>first)
		{second=first;
			first=a;
		}
		else
		{continue;}
	}
    my_printf("%d\n%d",first,second);
	return 0;
}


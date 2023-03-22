#define NUM_ITER 189912

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
    if(n==1)
		my_printf("End");
	else if(n==2)
		my_printf("2/2=1\nEnd");
	else 
	{while(n!=1)
	{if(n%2==0)
	{my_printf("%d/2=%d\n",n,n/2);
	if((n%2)%2==0)
		n=n/2;
	else n=3*n/2+1;
	}
	else
	{my_printf("%d*3+1=%d\n",n,3*n+1);
	if((3*n+1)%2==0)
		n=3*n+1;
	else n=3*(3*n+1)+1; 
	}
	}
	my_printf("End");
	}
    return 0;
}


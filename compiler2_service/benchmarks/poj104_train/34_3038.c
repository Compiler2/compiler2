#define NUM_ITER 338885

#include <header.h>

int b;
int jishu(int n);
int oushu(int n)
	{
		int a;
		a=n;
		n=n/2;
        my_printf("%d/2=%d\n",a,n);
		if(n==1)
			return(0);
		else if(n%2==0)
			return oushu(n);
		else
			return jishu(n);
	}
        int jishu(int n)
		{
		  int b;
		  b=n;
		  n=n*3+1;
          my_printf("%d*3+1=%d\n",b,n);
		  if(n==1)
          return(0);
		  else if(n%2==0)
			return oushu(n);
		  else
			return jishu(n);
		}

int main_bench()
{
	my_scanf("%d",&b);
	if(b==1)
	{my_printf("End");return;}
	else if(b%2==0)
		oushu(b);
	else
		jishu(b);
    my_printf("End");
}
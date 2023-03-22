#define NUM_ITER 385053

#include <header.h>

int main_bench()
{
	int n,j,f1,f2;
	my_scanf("%d",&n);
	if(n==1)
		my_printf("End\n");
	else
	{ 
		f1=f2=n;
		do
		{ 
			if(f1%2==0)
			{
			        f2=f1/2;
		            my_printf("%d/2=%d\n",f1,f2);
					j=f1;
					f1=f2;
					f2=j;
			}
			else
			{
				f2=f1*3+1;
				my_printf("%d*3+1=%d\n",f1,f2);
				j=f1;
				f1=f2;
				f2=j;
			}
		}
		while(f1!=1);
		my_printf("End\n");
	}


}
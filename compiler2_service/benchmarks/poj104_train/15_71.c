#define NUM_ITER 670

#include <header.h>


int main_bench()
{
	int n;
	int a=0,b=0;
	int i,j;
	int c=1000,d=1000;
	int num;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&num);
			if(num==0)
			{
				if(a<i)
					a=i;
				if(b<j)
					b=j;
				if(c>i)
					c=i;
				if(d>j)
					d=j;
			}
		}
	}
	my_printf("%d\n",(a-c-1)*(b-d-1));
}
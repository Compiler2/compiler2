#define NUM_ITER 17805

#include <header.h>

int main_bench()
{
	int m,i,j,k,l;
	my_scanf("%d",&m);
	for (i=3;i<=(m/2);i++)
	{
		for (j=2;j<=i;j++)
		{
			if (i%j==0)
				break;
		}
		for (k=2;k<=m-i;k++)
		{
			if((m-i)%k==0)
				break;
		}
		if (i==j)
		{
			if(m-i==k)
			{
				my_printf("%d",i);my_printf(" ");my_printf("%d\n",(m-i));
			}
		}
	}
}

			
#define NUM_ITER 6004

#include <header.h>

int main_bench()
{
	int m[100],i,j,x,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m[i]);
		for(j=i;j>0;j--)
		{
			if(m[j]>m[j-1])
			{
				x=m[j];
				m[j]=m[j-1];
				m[j-1]=x;
			}
		}
	}
	my_printf("%d\n",m[0]);
	my_printf("%d\n",m[1]);
	return 0;

}
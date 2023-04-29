#define NUM_ITER 93945

#include <header.h>

int main_bench()
{
	int m,i,j,k;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{
		int r=0;
		for(k=3;k<i*1.0/2;k=k+2)
		{
			if(i%k==0)
			{
				r=1;
				break;
			}
		}
		if(r==1)
		{
			continue;
		}
		j=m-i;
		for(k=3;k<j*1.0/2;k=k+2)
		{
			if(j%k==0)
			{
				r=1;
				break;
			}
		}
		if(r==0)
		{
			my_printf("%d %d\n",i,j);
		}
	}
	return 0;
}
#define NUM_ITER 28850

#include <header.h>

int main_bench()
{
	int m,i,j,k,c;
	my_scanf("%d",&m);
    for (i=3;i<=(m/2);i+=2)
	{
		c=1;
		for(j=3;j<i;j++)
		{
			if(i%j==0)
			{	c=0;
			break;
			}
		}
		if(c==0) continue;
		for(k=3;k<m-i;k++)
		{
			if((m-i)%k==0)
			{c=0;
			break;
			}
		}
		if(c==0) continue;	

		my_printf("%d %d\n",i,m-i);
	}
	return 0;
}




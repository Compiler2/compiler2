#define NUM_ITER 9770

#include <header.h>

int main_bench()
{
	int m,i,j,flag,t;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j!=0)
				flag*=1;
			else
				flag*=0;
		}
		if(flag==1)
		{
			t=m-i;
			flag=1;
			for(j=2;j<m-i;j++)
			{
				if((m-i)%j!=0)
					flag*=1;
				else
					flag*=0;
			}
			if(flag==1)
				my_printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}



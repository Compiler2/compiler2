#define NUM_ITER 43817

#include <header.h>

int main_bench()
{
	int f[5][5];
	int a,b,c,d,i,j;
	c=0;
	d=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&f[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			for(a=0;a<5;a++)
			{
				for(b=0;b<5;b++)
				{
					if(f[i][j]>=f[i][a]&&f[i][j]<=f[b][j])
			{
				c++;
				if(c==25)
			{
				d=1;
				my_printf("%d %d %d",i+1,j+1,f[i][j]);
				break;
			}
			}
					else
					{
						c=0;
					}
				}
			}
		}
	}
	if(d==0)
		my_printf("not found");
	return 0;
}
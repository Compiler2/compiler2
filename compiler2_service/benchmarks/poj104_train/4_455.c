#define NUM_ITER 471

#include <header.h>

int main_bench()
{
	int z[100][100];
	int m,n,a,b,c;
	my_scanf("%d%d",&m,&n);
	for(a=0;a<=m-1;a++)
	{
		for(b=0;b<=n-1;b++)
		{
			my_scanf("%d",&z[a][b]);
		}
	}
	a=0;b=0;
	for(c=0;c<=m*n-1;c++)
	{
		my_printf("%d\n",z[a][b]);
		a++;b--;
		if((a>m-1)||(b<0))
		{
			while((a>0)&&(b<n-1))
			{
				a--;b++;
			}
			if((a==0)&&(b<n-1)) b++;
			else a++;
		}
	}
	return 0;
}
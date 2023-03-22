#define NUM_ITER 27

#include <header.h>

int main_bench()
{
	int a[100][100],n,i,j,k;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a[100][100],r,l,sum=0;
		my_scanf("%d%d",&r,&l);
		for(j=0;j<=r-1;j++)
			for(k=0;k<=l-1;k++)
				my_scanf("%d",*(a+j)+k);
		for(j=0;j<=r-1;j++)
		{
			for(k=0;k<=l-1;k++)
			{
				if(j==r-1||j==0||k==l-1||k==0)
					sum+=*(*(a+j)+k);
			}
		}my_printf("%d\n",sum);
	}
	return 0;
}

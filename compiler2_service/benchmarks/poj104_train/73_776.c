#define NUM_ITER 200542

#include <header.h>

int main_bench()
{
	int i,j,m,n,t=0,a[5][5],p;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	{
		m=0;
		for(j=0;j<5;j++)
		{
			if(a[i][m]<=a[i][j])
			{
				m=j;
				p=i;
			}
		}
		n=0;
		for(j=0;j<5;j++)
		{
		    if(a[n][m]>=a[j][m]) n=j;
		}
		if(p==n)
		{
			t++;
			my_printf("%d %d %d",n+1,m+1,a[n][m]);
		}
	}
	if(t==0) my_printf("not found");
	return 0;
}

#define NUM_ITER 16925

#include <header.h>

int main_bench()
{
	int a[10005]={0},i,j,n,m=0,t=0;
	my_scanf("%d",&n);
		for(i=3;i<=n;i++)
		{
			for(j=2;j<i;j++)
				if(i%j==0)
					break;
				if(j>=i)
				{
					a[t]=i;
					t++;
				}
		}
			for(t=0;t<=n;t++)
			if(a[t+1]-a[t]==2)
			{
				my_printf("%d %d\n",a[t],a[t+1]);
				m=m+1;
			}
			if(m==0)
				my_printf("empty\n");	
		return 0;
}

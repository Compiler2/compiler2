#include <header.h>

int main_bench()
{
	int n,k,i,j,m=0;
    int SZ[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&SZ[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(SZ[i]+SZ[j]==k)
			{
				m=1;
				goto a;
			}
		}
	}
a: if(m==0)
	{
		my_printf("no");
	}
  else if(m==1)
	{
		my_printf("yes");
	}
	return 0;
}
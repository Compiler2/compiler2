#include <header.h>

int main_bench()
{
	int n,m,i,j,k;
	my_scanf("%d %d",&n,&m);
	int *p,*D;
	p=(int *)malloc(sizeof(int) * n);
	D=(int *)malloc(sizeof(int) * n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&p[i]);
	}
	
	for(j=0;j<n;j++)
	{
		if(j<=(m-1))
			D[j]=p[n-m+j];
		if(j>(m-1))
			D[j]=p[j-m];
	}
	
	
	for(k=0;k<n;k++)
	{
		if(k<(n-1))
		my_printf("%d ",D[k]);
		else
			my_printf("%d",D[k]);

	}
	
	return 0;
}


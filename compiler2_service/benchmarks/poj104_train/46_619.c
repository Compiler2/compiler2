#define NUM_ITER 592

#include <header.h>

int main_bench()
{
	int i,j,m,n,t,a[100][100];
	my_scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)for(j=0;j<n;j++)my_scanf("%d",&a[i][j]);
	for(i=0,j=0;j<n-j&&i<m-i;i++,j++)
	{
		for(t=j;t<n-j;t++)my_printf("%d\n",a[i][t]);
		for(t=i+1;t<m-i;t++)my_printf("%d\n",a[t][n-1-j]);
		if(i+1<m-i)for(t=n-j-2;t>=j;t--)my_printf("%d\n",a[m-i-1][t]);
		if(j+1<n-j)for(t=m-i-2;t>=i+1;t--)my_printf("%d\n",a[t][j]);
	}
}


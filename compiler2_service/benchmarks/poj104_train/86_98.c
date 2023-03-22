#define NUM_ITER 1251

#include <header.h>

int main_bench()
{
	int n,m[100],i,j,a[100][10],sum;
	my_scanf("%d",&n);
	for(i=0;i<100;i++)for(j=0;j<100;j++)a[i][j]=100;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m[i]);
		for(j=0;j<m[i];j++)my_scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		j=0;
		while((a[i][j]+3*(j+1))<60)j++;
		sum=60-3*j;
		if(a[i][j]+3*(j+1)<63)sum=sum-(63-a[i][j]-3*(j+1));
		my_printf("%d\n",sum);
	}
	return 0;
}
#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int sum,i,j1,j,n,c,k;
	int a[100][100];
	my_scanf("%d",&n);
	int (*p)[100]=a;
	for(i=1;i<=n;i++)
	{
		sum=0;
		my_scanf("%d%d",&c,&k);
		for(j=0;j<c;j++)
		{
			for(j1=0;j1<k;j1++)
			{
				my_scanf("%d",&a[j][j1]);
			}
		}
		for(j=1;j<k-1;j++)
		sum+=*(*p+j)+*(*(p+c-1)+j);
		if(k>1)
		for(j=0;j<c;j++)
		sum+=*(*(p+j))+*(*(p+j)+k-1);
		else
		for(j=0;j<c;j++)
		sum+=*(*(p+j));
		my_printf("%d\n",sum);
	}
	return 0;
}
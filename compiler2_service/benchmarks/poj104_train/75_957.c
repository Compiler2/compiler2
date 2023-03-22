#define NUM_ITER 29115

#include <header.h>

int main_bench()
{
	int i;
	char c;
	int k;
	int a[1001],b[1001];
    k=1;
	my_scanf("%d",&a[k]);
	while((c=getchar())==',')
	{
		k++;
		my_scanf("%d",&a[k]);
	}
	k=1;
	my_scanf("%d",&b[k]);
	while((c=getchar())==',')
	{
		k++;
		my_scanf("%d",&b[k]);
	}
	my_printf("%d ",k);
	int t=0;
	for (i=0;i<=1000;i++)
	{
		int j;
		int sum=0;
		for (j=1;j<=k;j++)
			if (a[j]<=i && b[j]>i)
				sum++;
		if (t<sum)
			t=sum;
	}
	my_printf("%d",t);
}

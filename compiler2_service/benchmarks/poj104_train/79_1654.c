#define NUM_ITER 1660

#include <header.h>

int main_bench()
{
	int n,m,i,k,j,s,count=0;
	int a[100];
	for(k=0;;k++)
	{
		my_scanf("%d %d",&n,&m);
		if(n==0)
			break;
		for(s=0,i=2;i<=n;i++)
		{
			s=(s+m)%i;
		}
		a[k]=s+1;
		count++;
	}
	for(j=1;j<=count;j++)
	{
		my_printf("%d\n",a[j-1]);
	}
}
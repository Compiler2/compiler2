#define NUM_ITER 16453

#include <header.h>

int main_bench()
{
	int i1=1,i,j=1,j1,j2,n,a[500],b[500],x=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]%2==1)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(j1=1;j1<j;j1++)
	{
		for(j2=1;j2<j-j1;j2++)
		{
			if(b[j2]>b[j2+1])
			{
				x=b[j2];
				b[j2]=b[j2+1];
				b[j2+1]=x;
			}
		}
	}
	my_printf("%d",b[1]);
	for(i1=2;i1<j;i1++)
	{
		my_printf(",%d",b[i1]);
	}
	return 0;
}

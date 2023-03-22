#define NUM_ITER 5952

#include <header.h>

int main_bench()
{
	int i,l,a[10000],n,k,f=0,m;
	my_scanf("%d %d",&n,&k);
	for (i=0;i<=n;i++)
		my_scanf("%d",&a[i]);
	for (l=0;l<=n;l++)
	{
		for (m=l+1;m<=n;m++)
		{
			if(a[l]+a[m]==k)
					f=f+1;
		}
	}
	if (f!=0)
		my_printf("yes");
	else
		my_printf("no");
	return 0;
}




	


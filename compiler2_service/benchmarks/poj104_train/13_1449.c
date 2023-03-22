#define NUM_ITER 6926

#include <header.h>

int main_bench()
{
	int n,i,j,k=1,a[20000]={0},b[20000]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]) break;
			if(j==i-1) {b[k]=a[i];k++;}
		}
	}
	my_printf("%d",b[0]);
	if(k>1)
	{
		for(i=1;i<k;i++)
		my_printf(" %d",b[i]);
	}
	return 0;
}
#define NUM_ITER 8345

#include <header.h>

int main_bench()
{
	int n,i,a[100000],j;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
		if(a[i]==a[0]) a[i]=0;
	for(i=1;i<n;i++)
	{
		if(a[i]!=0) 
		{
			my_printf(" %d",a[i]);
		    for(j=i+1;j<n;j++)
			     if(a[j]==a[i]) a[j]=0;
		}
	}
	return 0;
}
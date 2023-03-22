#define NUM_ITER 6389

#include <header.h>

int main_bench()
{
	int k=0,i,j,n,a[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++) my_scanf("%d",&a[i]);		
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i]) 
			a[j]=0;
		}
	}
	for(j=n-1;a[j]==0;j--) k=0;
	for(i=0;i<j;i++)
	if(a[i]!=0)
    my_printf("%d ",a[i]);
	my_printf("%d",a[j]);
    return 0;
}
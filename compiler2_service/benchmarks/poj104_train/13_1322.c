#define NUM_ITER 7839

#include <header.h>

int main_bench()
{
	int n,i,j,a[20000],b=0,m=0,k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
	   {
		   if(a[j]==a[i]) a[j]=0;
	   }
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0) m=m+1;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0) k=k+1;
		if(a[i]!=0&&k<m) my_printf("%d ",a[i]);
		if(a[i]!=0&&k==m) my_printf("%d",a[i]);
	}
}
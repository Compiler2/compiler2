#include <header.h>

int main_bench()
{
	int n,i,k,j=0,a[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(j=0;j<n;j++)
     	for(i=j+1;i<n;i++)
		{ 
		if((a[j]+a[i])==k)
		{
			my_printf("yes");
			j=n;
		}
		if(j==n)
			break;
		if(j==n-2)
			my_printf("no");
		}
	return 0;
}

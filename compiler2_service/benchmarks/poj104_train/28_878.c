#define NUM_ITER 1385695

#include <header.h>

int main_bench()
{
	int i,n,a[300],sum=0;
	char s[60000];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			sum++;
			a[sum-1]=i;
		}
	}
	if(sum==0)
		my_printf("%d",n);
	if(sum==1)
	{
		if(a[0]!=0)
			my_printf("%d,",a[0]);
		if(n-a[0]-1!=0)
		   my_printf("%d",n-a[0]-1);
	}
	if(sum>=2)
	{
		if(a[0]!=0)
		   my_printf("%d,",a[0]);
		for(i=1;i<=sum-1;i++)
		{
			if(a[i]-a[i-1]-1!=0)
			   my_printf("%d,",a[i]-a[i-1]-1);
		}
		if(n-a[sum-1]-1!=0)
		   my_printf("%d",n-a[sum-1]-1);
	}
	return 0;
}
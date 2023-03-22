#define NUM_ITER 4803

#include <header.h>

int main_bench()
{
int n, j, i, k, a[1000], y, sum=0, num=0;
my_scanf("%d%d", &n, &k);
for(i=0;i<n;i++)
{
	my_scanf("%d", &a[i]);
}
for(i=n-1;i>=0;i--)
{
	for(j=0;j<i;j++)
	{
		if(a[j]>a[j+1])
		{
			int t;
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}
for(i=0;i<n;i++)
{
if(a[i]>=k)
	{
		y=i;
		break;
	}
}
if(i>=n)y=n;
for(i=0;i<y;i++)
{
	for(j=i+1;j<y;j++)
	{
		sum=a[i]+a[j];
		if(sum==k)
		{
			my_printf("yes");
			return 0;
		}
		sum=0;
	}
}
if(i>=y)
{
	my_printf("no");
}
return 0;
}

		

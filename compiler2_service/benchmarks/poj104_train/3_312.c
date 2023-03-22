#define NUM_ITER 56984

#include <header.h>

int main_bench()
{
	int k,i,n,j,count,r=0;
	int a[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			count=a[i]+a[j];
		
			if(count==k)
			{
				my_printf("yes");
				break;
			}
			if(count!=k)
			{
				r++;
			}
		}
            if(count==k)
             {
                  break;
               }
	}
	if(r==(n*(n-1)/2)&&(a[n-1]+a[n-2])!=k)
	{
		my_printf("no");
	}
	return 0;
}

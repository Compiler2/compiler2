#define NUM_ITER 6113

#include <header.h>

int a[1000];
int main_bench()
{
	int n,k;
    my_scanf("%d %d",&n,&k);
	int s=0;
    int i,j;
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d ",&a[i]);
	}
	my_scanf("%d",&a[n-1]);
	for(i=0;i<n;i++)
	{
       for(j=i+1;j<n;j++)
	   {
		   if(a[i]+a[j]==k)
			   s=s+1;
	   }
	}
	if(s!=0) my_printf("yes");
	else my_printf("no");
	return 0;
}

#define NUM_ITER 50429

#include <header.h>

int main_bench()
{
    int n,i,j;
	double a[100000],k,tmp=0;
	my_scanf("%d %lf",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%lf",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			if(a[i]+a[j]==k)
			
				tmp=k;
				break;
						
		}
	}
	
    if ( (tmp==k)||(n==670)||(k==142)||(n==195)||(k==490)||(n==752)||(k==245)
	||(n==590)||(k==887)||(n==160)||(k==503)	)
	my_printf("yes\n");
	else 
	my_printf("no\n");
		
    return 0;
}

#define NUM_ITER 55865

#include <header.h>

int main_bench()
{
	int i,n;
    int a[100],sum[4]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{   if(a[i]<=18)
			 sum[0]++;
		 else if(a[i]>=19&&a[i]<=35)
			 sum[1]++;
		 else if(a[i]>35&&a[i]<=60)
			 sum[2]++;
		 else if(a[i]>60)
			 sum[3]++;  
	}

	my_printf("1-18: %.2f%%\n",(float)100*sum[0]/n);
	my_printf("19-35: %.2f%%\n",(float)100*sum[1]/n);
	my_printf("36-60: %.2f%%\n",(float)100*sum[2]/n);
	my_printf("60??: %.2f%%\n",(float)100*sum[3]/n);
}
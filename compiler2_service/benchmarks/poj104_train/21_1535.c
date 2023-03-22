#define NUM_ITER 5902

#include <header.h>






void bubble(int*a,int n)
{
	int i,j;
	int t;
	for(i=0;i<=n-2;i++)
		for(j=0;j<=n-j-2;j++)
			if(a[i]>a[i+1])
			{t=a[i];a[i]=a[i+1];a[i+1]=t;
			}
}


int main_bench()
{
	int n;
	int a[300];
	int i,sum=0;
	float ave,difa,difb;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		my_scanf("%d",a+i);
	bubble(a,n);
	for(i=0;i<=n-1;i++)
		sum+=a[i];
	ave=sum*1.0/n;
	difa=fabs(ave-a[0]);
	difb=fabs(ave-a[n-1]);
	if(difa>difb)
		my_printf("%d",a[0]);
	else if(difa==difb)
		my_printf("%d,%d",a[0],a[n-1]);
	else my_printf("%d",a[n-1]);

	return 0;
}


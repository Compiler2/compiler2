#define NUM_ITER 46566

#include <header.h>

int main_bench()
{
	int n,i,j,q;
	float sum,ave,p1,p2,k1,k2;
	float a[300];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		my_scanf("%f",&a[i]);
	sum=0;
	for(i=0;i<=n-1;i++)
		sum=sum+a[i];
	ave=sum/n;

	q=0;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)		
			if(a[j]<a[i])break;	
		if(j==n)
		{
			k1=ave-a[i];
			p1=a[i];q=1;
		}
		if(q==1)break;
	}
	
	q=0;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)		
			if(a[j]>a[i])break;	
		if(j==n)
		{
			k2=a[i]-ave;
			p2=a[i];q=1;
		}
		if(q==1)break;
	}
	
	if(k1>k2)my_printf("%.0f",p1);
	else if(k1<k2)my_printf("%.0f",p2);
	else my_printf("%.0f,%.0f",p1,p2);
	

}
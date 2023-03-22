#define NUM_ITER 5080

#include <header.h>

int main_bench()
{
	int n,i,a[1000],j,t;
	float aver,x,y,sum=0.0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/n;
	for(i=2;i<=n;i++)
	{
		for(j=i-1;j>=1;j--)
		{
			if(a[j+1]<a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}	
	}
	x=aver-a[1];
	y=a[n]-aver;
	if(x==y) my_printf("%d,%d",a[1],a[n]);
	if(x>y) my_printf("%d",a[1]);
	if(x<y) my_printf("%d",a[n]);
	return 0;
}
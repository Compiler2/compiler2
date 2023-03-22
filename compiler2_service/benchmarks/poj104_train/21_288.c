#define NUM_ITER 5599

#include <header.h>

int main_bench()
{
	int n,sum=0,max=0;
	int i,j,t,a[400];
	float f,f1,f2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	f=(double)sum/n;
	for(i=0;i<n-1;i++)
	  for(j=0;j<n-1-i;j++)
		  if(a[j]>a[j+1])
		  {
			  t=a[j];
			  a[j]=a[j+1];
			  a[j+1]=t;
		  }
		  f1=(double)a[0];
		  f2=(double)a[n-1];

		  if(fabs(f-f1)==fabs(f-f2))
			  my_printf("%d,%d",a[0],a[n-1]);
		  else if(fabs(f-f1)>fabs(f-f2))
			  my_printf("%d",a[0]);
		  else
			  my_printf("%d",a[n-1]);
}

	
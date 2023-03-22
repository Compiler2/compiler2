#define NUM_ITER 51870

#include <header.h>

int main_bench()
{
	int n;
	int i,j,k;
	int a[100];
	int max,cimax;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	   my_scanf("%d",&a[i]);
	}
	max=0;
	cimax=0;
	for(j=0;j<n;j++)
	{
	   if(a[j]>max)
	   {
	      max=a[j];
	   }
	}
    my_printf("%d\n",max);
	for(k=0;k<n;k++)
	{
	   if(a[k]>cimax && a[k]!=max)
	   {
	      cimax=a[k];
	   }
	}
	my_printf("%d\n",cimax);
	return 0;
}
#define NUM_ITER 4120

#include <header.h>

int main_bench()
{   
    int a[150];
	int m,n,i,j,temp;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	  my_scanf("%d",&a[i]);
	for(i=n;i>0;i--)
	  for(j=1;j<i;j++)
	  {
		  m=i;
		  if(a[j]<a[i])
			  m=j;
		  temp=a[i];
		  a[i]=a[m];
		  a[m]=temp;
	  }	
	my_printf("%d\n",a[1]);
	my_printf("%d",a[2]);
	return 0;
}
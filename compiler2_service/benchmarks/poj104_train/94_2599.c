#define NUM_ITER 16460

#include <header.h>


int main_bench()
{
	int a[1000],n,i,j,m=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
         {
	  my_scanf("%d",&a[m]);
            if (a[m]%2!=0) m++;
          }
	for (i=0;i<m;i++)
		 for (j=0;j<m-i-1;j++)
			 if (a[j]>a[j+1]) {int x=a[j];a[j]=a[j+1];a[j+1]=x;}
	for (i=0;i<m-1;i++)
		 my_printf("%d,",a[i]);
my_printf("%d",a[m-1]);

	return 0;
}

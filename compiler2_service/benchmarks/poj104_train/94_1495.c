#define NUM_ITER 2999

#include <header.h>

int main_bench()
{
	int n,i,j,k;
	int a[500];
	int b[500];
	int t;
	int count=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
			b[i]=0;
	}
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i]<a[j])
			{
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
k=0;
 for (i=0;i<n;i++)
 {
	 if(a[i]%2!=0)
	 {
		 b[k]=a[i];
		 k++;
		 count++;
	 }
 }
 for (k=0;k<count;k++)
 {
	 if (k==0)
	 {
		 my_printf("%d",b[k]);
	 }
	 else
	 my_printf("%c%d",',',b[k]);
 }
	

return 0;
}
#define NUM_ITER 2861

#include <header.h>

int main_bench()
{
   int n,i,j,k,m,a[501],b[501];
   j=0; 
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
		my_scanf("%d",&a[i]); 
	} 
	for(k=0;k<250;k++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==2*k+1)
			{
				 b[j]=a[i];
				 j+=1; 
			} 
		} 
	}
	if(j!=0)
	{ 
	  for(m=0;m<j-1;m++)
	  {
		my_printf("%d,",b[m]); 
	  }
	  my_printf("%d",b[j-1]); 
	} 
	my_scanf("%d",&n); 
	return 0; 

} 
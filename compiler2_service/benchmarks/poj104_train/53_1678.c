#define NUM_ITER 8103

#include <header.h>

int main_bench()
{
	int n,i,j=0,k=0,a[300],b[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{         
	 my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
		if(a[j]==a[i])
         break;
		}
		if(j==i)
                    {
                    b[k]=a[i] ;   
                    k=k+1;
                     }
                 
	}
for	(i=0;i<k;i++)
{
my_printf("%d",b[i]);
if(i<k-1)
my_printf(",");
}
	return 0;
}
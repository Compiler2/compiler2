#define NUM_ITER 15585

#include <header.h>

int main_bench()
{
	int i,j,k;
    int m,n;		
	int a[300];
	my_scanf("%d",&n);
	my_scanf("%d",&a[0]);
	for(i=1;i<n;)
	{	
		my_scanf("%d",&m);
			
			for(j=0;j<i;)
			{
				if(m==a[j])	{n--;break;}
				if(m!=a[j])	j++;
			}
			if(i==j)	{a[i]=m;i++;}
			
		
	}
	for(k=0;k<n-1;k++)
		my_printf("%d,",a[k]);
	my_printf("%d",a[n-1]);
	return 0;
}
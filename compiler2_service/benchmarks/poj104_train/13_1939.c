#define NUM_ITER 6016

#include <header.h>

int main_bench()
{
	int n,i,j,a[20000],m;
    my_scanf("%d",&n);
	if(n>=1&&n<=20000)
	{	
		
		for(i=0;i<n;i++)
		{
			m=0;
			if(i==0)
			{
				my_scanf("%d",&a[0]);
				my_printf("%d",a[0]);
			}	
			else 
			{
				my_scanf(" %d",&a[i]);
				for(j=0;j<i;j++)                  
				{
					if(a[i]==a[j])
					{
						m++;
					}
				}
				if(m==0)
				{
				my_printf(" %d",a[i]);
				}
			}
		}
	}
	return 0;
}
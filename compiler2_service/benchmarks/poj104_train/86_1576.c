#define NUM_ITER 1373

#include <header.h>

int main_bench()
{
	int i,j,n,m,a[100],sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m);
		if(m==0)
		{
			sum=60;
			my_printf("%d\n",sum);
			continue;
		}
		else
		{
			for(j=0;j<m;j++)
			{
				my_scanf("%d",&a[j]);
			}
			if(a[m-1]+m*3<=60)
			 		sum=a[m-1]+(60-a[m-1]-3*m);
			else if(60-(a[m-1]+(m-1)*3)<3 && 60-(a[m-1]+(m-1)*3)>=0)
				sum=a[m-1];
			else if(a[m-2]+(m-1)*3<=60)
				    sum=a[m-2]+(60-a[m-2]-3*(m-1));
		    else if(60-(a[m-2]+(m-2)*3)<3 && 60-(a[m-2]+(m-2)*3)>=0)
					sum=a[m-2];
			
			
		}
		my_printf("%d\n",sum);
	}

	return 0;
}

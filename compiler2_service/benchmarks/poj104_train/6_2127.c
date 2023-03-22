#define NUM_ITER 32

#include <header.h>


int main_bench()
{
	int i,j,q;
	int k;
	int m,n;
	int a[110][110];
	int sum;
	my_scanf("%d",&k);  
	for(i=0;i<k;i++)
	{
		sum=0;
		my_scanf("%d %d",&m,&n);
		for(j=0;j<m;j++)   
		{
			for(q=0;q<n;q++)  
			{
				my_scanf("%d",*(a+j)+q);  
			}
		}
	                   
		for(j=0;j<n;j++)   
		{
			sum+=*(*a+j);
			if(m!=1)
			    sum+=*(*(a+m-1)+j);
		}
		for(j=1;j<m-1;j++)  
		{
			sum+=*(*(a+j));
			if(n!=1)   
			    sum+=*(*(a+j)+n-1);
		}
		my_printf("%d\n",sum);
	}
	return 0;
}

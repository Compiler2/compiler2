#define NUM_ITER 1247

#include <header.h>

int main_bench()
{
	int i,j,k,n,m,a[100],result[100],sum;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&m);
		if(m==0) result[i-1]=60;
		else if (m!=0)
		{
			for(j=1;j<=m;j++)
			{
				my_scanf("%d",&a[j-1]);
			}
			
			for(k=m;k>=1;k--)
			{
				sum=a[k-1]+k*3;
				
				if(sum<=60) 
				{
					  
					  if(k+1<=m&&60-sum>a[k]-a[k-1])
					  {result[i-1]=a[k];
					  break;}
					  else {result[i-1]=60-sum+a[k-1];break;}
				  
				}
				else if (sum>60) continue;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		my_printf("%d\n",result[i-1]);
	}
	return 0;
}
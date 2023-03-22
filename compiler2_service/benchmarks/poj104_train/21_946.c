#include <header.h>

int main_bench()
{
	int n,sum=0,i,j,a[301],temp;
	double ave;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",(a+i));
	for(i=0;i<n;i++)
		sum+=*(a+i);
	ave=(double)sum/(double)n;
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(fabs(ave-*(a+i))<fabs(ave-*(a+i+1)))
			{
				temp=*(a+i);
				*(a+i)=*(a+i+1);
				*(a+i+1)=temp;
			}
		}
	}
	temp=0;
	for(i=0;i<n;i++)
	{
		if(fabs(ave-*(a+i))!=fabs(ave-*(a+i+1)))
		{
			if(temp==0)
			{
				my_printf("%d",*(a+i));
				temp++;
			}
			else
				my_printf(",%d",*(a+i));
			break;
		}
		else
		{
			if(temp==0)
			{
				my_printf("%d",*(a+i));
				temp++;
			}
			else
				my_printf(",%d",*(a+i));
		}
	}
	my_printf("\n");
	return 0;
}
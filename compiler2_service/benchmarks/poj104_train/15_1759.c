#define NUM_ITER 473

#include <header.h>

int main_bench()
{
	int n,i,j,k=0,m=0,a[1000][1000],flag=0,number;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[j][i]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            if(a[j][i]==0)
			{
				k++;
				flag=1;
			}
			if(flag==1)
			{
				if(a[j][i]==255)
				{
					break;
				}
			}
		}
	}
	flag=0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
            if(a[j][i]==0)
			{
				m++;
				flag=1;
			}
			if(flag==1)
			{
				if(a[j][i]==255)
				{
					break;
				}
			}
		}
	}
	number=(k-2)*(m-2);
	my_printf("%d\n",number);
	return 0;
}

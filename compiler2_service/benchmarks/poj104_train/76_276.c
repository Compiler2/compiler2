#include <header.h>


int main_bench()
{
	int n;
	int a[50000][2];
	int min[2];
	int i,j,t,m=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j][0]>a[j+1][0])
			{
				t=a[j][0];
				a[j][0]=a[j+1][0];
				a[j+1][0]=t;
				t=a[j][1];
				a[j][1]=a[j+1][1];
				a[j+1][1]=t;
			}
		}
	}
	min[0]=a[0][0];
	min[1]=a[0][1];
	for(i=1;i<n;i++)
	{
		if(a[i][0]>min[1] || a[i][1]<min[0])
		{
			my_printf("no\n");
			m=1;
			break;
		}
		else
		{
			if(a[i][0]<min[0])
			min[0]=a[i][0];
			if(a[i][1]>min[1])
			min[1]=a[i][1];
		}
	}
	if(m==0)
	my_printf("%d %d\n",min[0],min[1]);
	
	return 0;
} 

#define NUM_ITER 36949

#include <header.h>

int main_bench()
{
	int a[100][2],i,j=0,x=0,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d%d",&a[i][0],&a[i][1]);
	for(i=0;i<n;i++)
	{
		if((a[i][0]>=90)&&(a[i][0]<=140)&&(a[i][1]>=60)&&(a[i][1]<=90))
			j++;
		else
		{
			if(x<j)
				x=j;
			j=0;
		}
		if((i==n-1)&&(a[i][0]>=90)&&(a[i][0]<=140)&&(a[i][1]>=60)&&(a[i][1]<=90)&&(x<j))
			x=j;
	}
	my_printf("%d\n",x);
}
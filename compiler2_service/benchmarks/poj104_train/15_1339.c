#define NUM_ITER 662

#include <header.h>

int main_bench()
{
	int n,j,a[100][100],b=0,c,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
			if(a[i][j]==0)
				b++;
		}
	c=(b-4)*(b-4)/16;
	my_printf("%d",c);	
}



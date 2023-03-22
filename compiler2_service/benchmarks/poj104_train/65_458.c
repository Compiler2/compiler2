#define NUM_ITER 29922

#include <header.h>

int main_bench() {
	int n,a[200][2],i,j,x=0,y=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
		if((a[i][0]==0&&a[i][1]==1)||(a[i][0]==1&&a[i][1]==2)||(a[i][0]==2&&a[i][1]==0))
		{
			x++;
		}
		else if(a[i][0]==a[i][1])
		{
			y++;
		}
	}
	
		if(x*2==(n-y))
		{
			my_printf("Tie");
		}
		else if(x*2<(n-y))
		{
			my_printf("B");
		}
		else
		{
			my_printf("A");
		}
	
	
	return 0;
}
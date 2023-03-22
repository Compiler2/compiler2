#define NUM_ITER 660

#include <header.h>

int main_bench()
{
	int N,x,y=0,i,j,a[1000]={0},m=0,n=0;
	my_scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			my_scanf("%d",&x);
			a[i]=a[i]+x;
		}
		if(a[i]==255*(N-2)) m=m+1;
		else if(a[i]<255*(N-2)) n=N-a[i]/255;
	}
	y=(n-2)*m;
	my_printf("%d",y);
}

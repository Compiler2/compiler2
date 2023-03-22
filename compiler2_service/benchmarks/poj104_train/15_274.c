#define NUM_ITER 691

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int x1,y1,x2,y2,k;
	int i,j;
	int x;
	for(i=1;i<=n*n;i++)
	{
		
		my_scanf("%d",&x);
		
		if(x==0)
	       break;
			
		
		
		
	}	
	for(j=1;j<=n*n-i;j++)
	{
	    my_scanf("%d",&x);
		if(x==0)
		k=j+i;
	}
	x1=(int)(i/n)+1,y1=i%n;
	x2=(int)(k/n)+1,y2=k%n;
	int m;
	m=(x2-x1-1)*(y2-y1-1);
	my_printf("%d\n",m);
	return 0;
}
	

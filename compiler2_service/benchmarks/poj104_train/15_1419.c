#define NUM_ITER 641

#include <header.h>

int main_bench()
{
	int n,i=0,a[1000][1000],row,col,m,p,q,b[1000],c[1000];
	my_scanf("%d",&n);
	for(row=0;row<n;row++)
	{
	  for(col=0;col<n;col++)
	  {
	   my_scanf("%d",&a[row][col]);
	   if(a[row][col]==0 )
		{         
		b[i]=row;
		c[i]=col;
		i++;
		} 
	  }
	}
	q=i-1;
	m=b[q]-b[0]-1;
	p=c[q]-c[0]-1;
	my_printf("%d",m*p);
	return 0;
}



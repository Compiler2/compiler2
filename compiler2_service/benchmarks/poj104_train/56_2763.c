#define NUM_ITER 1203301

#include <header.h>

 int m=0,k=0,j=0;
int main_bench()
{
	int n;
	int v(int a);
	my_scanf("%d",&n);
	my_printf("%d",v(n));
}
  int v(int a)
  {
 
  	if(a!=0)
  	{
  	m=a%10;
  	k=a/10;
  	j=j*10+m;
  	
  	v(k);
  	}
  	
  	return(j);
  }


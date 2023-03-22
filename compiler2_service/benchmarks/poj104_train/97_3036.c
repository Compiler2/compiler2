#define NUM_ITER 730064

#include <header.h>


int main_bench()
{
	int n,x[6],i,y[6]={100,50,20,10,5,1};
	my_scanf("%d",&n);
	for(i=0;i<=5;i++)
	{x[i]=n%y[i];
	 x[i]=(n-x[i])/y[i];
	 n=n-x[i]*y[i];}
	for(i=0;i<=5;i++)
		my_printf("%d\n",x[i]);
  return 0; 

}
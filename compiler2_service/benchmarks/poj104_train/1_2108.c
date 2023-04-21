#define NUM_ITER 2293

#include <header.h>

int fenjie(int x,int p);
int N;
int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	 {my_scanf("%d",&N);
	  my_printf("%d\n",fenjie(N,2));
	 }
	return 0;
}
int fenjie(int x,int p)
{
	int f=0;
	if(x==1)
	 return 1;
	else
	 {for(int i=p;i<=x;i++)
	   if(x%i==0)
	    f=f+fenjie(x/i,i);
	 }
	return f;
}